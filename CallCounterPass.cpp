#include "llvm/IR/Function.h"
#include "llvm/Pass.h"
#include "llvm/IR/Instructions.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

namespace {
struct CallCounterPass : public FunctionPass {
  static char ID;
  CallCounterPass() : FunctionPass(ID) {}

  bool runOnFunction(Function &F) override {
    int callCount = 0;

    for (auto &BB : F) {
      for (auto &I : BB) {
        if (isa<CallInst>(&I)) {
          callCount++;
        }
      }
    }

    errs() << "Function: " << F.getName() << ", Call count = " << callCount << "\n";
    return false; // It's an analysis pass, doesn't modify anything
  }
};
} // namespace

char CallCounterPass::ID = 0;
static RegisterPass<CallCounterPass> X("countcalls", "Function Call Counter Analysis Pass");
