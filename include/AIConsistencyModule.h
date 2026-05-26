// ============================================================================
// MODULE 1 — AI CONSISTENCY MODULE (Header)
// Ward Logic Engine — Public-Safe Implementation Shell
// ============================================================================

#pragma once
#include <string>
#include <vector>
#include <map>
#include <mutex>

// ---------------------------------------------------------------------------
// ENUMS & STRUCTS
// ---------------------------------------------------------------------------

enum class ConsistencyStatus {
    OK,
    RULE_VIOLATION,
    DRIFT_DETECTED,
    INVALID_OUTPUT,
    INTERNAL_ERROR
};

struct ConsistencyReport {
    ConsistencyStatus status;
    std::string message;
    std::string correctedOutput;
};

// ---------------------------------------------------------------------------
// AIConsistencyModule CLASS
// ---------------------------------------------------------------------------

class AIConsistencyModule {
public:
    AIConsistencyModule();

    // Load organizational rules, tone, constraints, etc.
    void loadRules(const std::map<std::string, std::string>& rules);

    // Load reasoning patterns (safe external version)
    void loadReasoningPatterns(const std::vector<std::string>& patterns);

    // Validate output from any module
    ConsistencyReport validateOutput(const std::string& input,
                                     const std::string& output);

    // Enforce tone, structure, and compliance
    std::string enforceConsistency(const std::string& output);

    // Provide stable identity across modules
    std::string applyIdentityLayer(const std::string& output);

    // Hook for future modules (Modules 2–28)
    void registerModule(const std::string& moduleName);

    // Retrieve system-wide consistency logs (safe version)
    std::vector<std::string> getLogs() const;

private:
    // Internal rule storage (safe)
    std::map<std::string, std::string> ruleSet;

    // Reasoning pattern storage (safe)
    std::vector<std::string> reasoningPatterns;

    // Registered modules
    std::vector<std::string> registeredModules;

    // Consistency logs
    std::vector<std::string> logs;

    // Thread safety
    mutable std::mutex lock;

    // Internal helper functions (safe placeholders)
    bool violatesRules(const std::string& output) const;
    bool detectsDrift(const std::string& output) const;
    std::string correctOutput(const std::string& output) const;
};
