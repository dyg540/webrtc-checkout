// This is generated file. Do not modify directly.

#ifndef GEN_MODULES_DESKTOP_CAPTURE_LINUX_PIPEWIRE_STUBS_H_
#define GEN_MODULES_DESKTOP_CAPTURE_LINUX_PIPEWIRE_STUBS_H_

#include <map>
#include <string>
#include <vector>

namespace modules_desktop_capture_linux {
// Individual module initializer functions.
bool IsPipewire03Initialized();
void InitializePipewire03(void* module);
void UninitializePipewire03();

// Enum and typedef for umbrella initializer.
enum StubModules {
  kModulePipewire03 = 0,
  kNumStubModules
};

typedef std::map<StubModules, std::vector<std::string>> StubPathMap;

// Umbrella initializer for all the modules in this stub file.
bool InitializeStubs(const StubPathMap& path_map);
}  // namespace modules_desktop_capture_linux

#endif  // GEN_MODULES_DESKTOP_CAPTURE_LINUX_PIPEWIRE_STUBS_H_
