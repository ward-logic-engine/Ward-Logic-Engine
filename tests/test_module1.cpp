#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "../include/AIConsistencyModule.h"

void printReport(const ConsistencyReport& report) {
    std::cout << "Status: ";
    switch (report.status) {
        case ConsistencyStatus::OK: std::cout << "OK"; break;
        case ConsistencyStatus::RULE_VIOLATION: std::cout << "RULE_VIOLATION"; break;
        case ConsistencyStatus::DRIFT_DETECTED: std::cout << "DRIFT_DETECTED"; break;
        case ConsistencyStatus::INVALID_OUTPUT: std::cout << "INVALID_OUTPUT"; break;
        case ConsistencyStatus::INTERNAL_ERROR: std::cout << "INTERNAL_ERROR"; break;
    }
    std::cout << "\nMessage: " << report.message << std::endl;
    std::cout << "Corrected Output: " << report.correctedOutput << std::endl;
}

int main() {
    std::cout << "=== MODULE 1 TEST SUITE ===" << std::endl;

    AIConsistencyModule module;

    // Load rules
    std::map<std::string, std::string> rules = {
        {"tone", "consistent"},
        {"compliance", "true"},
        {"driftProtection", "enabled"}
    };

    module.loadRules(rules);

    // Load reasoning patterns
    std::vector<std::string> patterns = {
        "logical reasoning",
        "structured output",
        "stable identity"
    };

    module.loadReasoningPatterns(patterns);

    // Register module
    module.registerModule("AI Consistency Module");

    // Test 1: Normal output
    std::cout << "\n[Test 1] Normal Output" << std::endl;
    ConsistencyReport report1 = module.validateOutput("input", "This is a stable output.");
    printReport(report1);

    // Test 2: Drift simulation (placeholder always returns false)
    std::cout << "\n[Test 2] Drift Detection (placeholder)" << std::endl;
    ConsistencyReport report2 = module.validateOutput("input", "Potential drift output.");
    printReport(report2);

    // Test 3: Identity layer
    std::cout << "\n[Test 3] Identity Layer" << std::endl;
    std::string identityOutput = module.applyIdentityLayer("Hello world.");
    std::cout << "Identity Output: " << identityOutput << std::endl;

    // Test 4: Logs
    std::cout << "\n[Test 4] Logs" << std::endl;
    for (const auto& log : module.getLogs()) {
        std::cout << "- " << log << std::endl;
    }

    std::cout << "\n=== MODULE 1 TEST COMPLETE ===" << std::endl;
    return 0;
}
