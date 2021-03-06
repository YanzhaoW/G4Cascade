#pragma once

#include "G4UserRunAction.hh"

class G4Run;

class RunActionNtuple : public G4UserRunAction {
  public:
    RunActionNtuple();
    ~RunActionNtuple() override;
    RunActionNtuple(const RunActionNtuple&) = delete;
    RunActionNtuple(RunActionNtuple&&) = delete;
    RunActionNtuple& operator=(const RunActionNtuple&) = delete;
    RunActionNtuple& operator=(RunActionNtuple&&) = delete;

    void BeginOfRunAction(const G4Run* /*aRun*/) override;
    void EndOfRunAction(const G4Run* /*aRun*/) override;
};
