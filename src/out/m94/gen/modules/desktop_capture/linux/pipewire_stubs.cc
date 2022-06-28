// This is generated file. Do not modify directly.

#include "modules/desktop_capture/linux/pipewire_stubs.h"

#include <dlfcn.h>   // For dlsym, dlopen, RTLD_LAZY.

#include <cstdarg>

#include "base/compiler_specific.h"
#include "rtc_base/logging.h"

// The extra include header needed in the generated stub file for defining
// various PipeWire types.

extern "C" {

#include <pipewire/pipewire.h>

}

namespace  {

void LogDlerror(const char* symbol) {
  RTC_LOG(LS_VERBOSE) << "Couldn't load " << symbol << ", dlerror() says:\n" << dlerror();
}

}  // namespace 

extern "C" {

// Static pointers that will hold the location of the real function
// implementations after the module has been loaded.
static int (*pw_core_disconnect_ptr)(pw_core *core) = nullptr;
static void (*pw_loop_destroy_ptr)(pw_loop *loop) = nullptr;
static pw_loop * (*pw_loop_new_ptr)(const spa_dict *props) = nullptr;
static void (*pw_init_ptr)(int *argc, char **argv[]) = nullptr;
static pw_properties * (*pw_properties_new_string_ptr)(const char *args) = nullptr;
static void (*pw_stream_add_listener_ptr)(pw_stream *stream, spa_hook *listener, const pw_stream_events *events, void *data) = nullptr;
static int (*pw_stream_connect_ptr)(pw_stream *stream, enum pw_direction direction, uint32_t target_id, enum pw_stream_flags flags, const spa_pod **params, uint32_t n_params) = nullptr;
static pw_buffer * (*pw_stream_dequeue_buffer_ptr)(pw_stream *stream) = nullptr;
static void (*pw_stream_destroy_ptr)(pw_stream *stream) = nullptr;
static pw_stream * (*pw_stream_new_ptr)(pw_core *core, const char *name, pw_properties *props) = nullptr;
static int (*pw_stream_queue_buffer_ptr)(pw_stream *stream, pw_buffer *buffer) = nullptr;
static int (*pw_stream_set_active_ptr)(pw_stream *stream, bool active) = nullptr;
static int (*pw_stream_update_params_ptr)(pw_stream *stream, const spa_pod **params, uint32_t n_params) = nullptr;
static void (*pw_thread_loop_destroy_ptr)(pw_thread_loop *loop) = nullptr;
static pw_thread_loop * (*pw_thread_loop_new_ptr)(const char *name, const spa_dict *props) = nullptr;
static int (*pw_thread_loop_start_ptr)(pw_thread_loop *loop) = nullptr;
static void (*pw_thread_loop_stop_ptr)(pw_thread_loop *loop) = nullptr;
static void (*pw_thread_loop_lock_ptr)(pw_thread_loop *loop) = nullptr;
static void (*pw_thread_loop_unlock_ptr)(pw_thread_loop *loop) = nullptr;
static pw_loop * (*pw_thread_loop_get_loop_ptr)(pw_thread_loop *loop) = nullptr;
static void (*pw_context_destroy_ptr)(pw_context *context) = nullptr;
static pw_context * (*pw_context_new_ptr)(pw_loop *main_loop, pw_properties *props, size_t user_data_size) = nullptr;
static pw_core * (*pw_context_connect_ptr)(pw_context *context, pw_properties *properties, size_t user_data_size) = nullptr;

// Stubs that dispatch to the real implementations.
extern int pw_core_disconnect(pw_core *core) __attribute__((weak));
DISABLE_CFI_ICALL
int  pw_core_disconnect(pw_core *core) {
  return pw_core_disconnect_ptr(core);
}
extern void pw_loop_destroy(pw_loop *loop) __attribute__((weak));
DISABLE_CFI_ICALL
void  pw_loop_destroy(pw_loop *loop) {
  pw_loop_destroy_ptr(loop);
}
extern pw_loop * pw_loop_new(const spa_dict *props) __attribute__((weak));
DISABLE_CFI_ICALL
pw_loop *  pw_loop_new(const spa_dict *props) {
  return pw_loop_new_ptr(props);
}
extern void pw_init(int *argc, char **argv[]) __attribute__((weak));
DISABLE_CFI_ICALL
void  pw_init(int *argc, char **argv[]) {
  pw_init_ptr(argc, argv);
}
extern pw_properties * pw_properties_new_string(const char *args) __attribute__((weak));
DISABLE_CFI_ICALL
pw_properties *  pw_properties_new_string(const char *args) {
  return pw_properties_new_string_ptr(args);
}
extern void pw_stream_add_listener(pw_stream *stream, spa_hook *listener, const pw_stream_events *events, void *data) __attribute__((weak));
DISABLE_CFI_ICALL
void  pw_stream_add_listener(pw_stream *stream, spa_hook *listener, const pw_stream_events *events, void *data) {
  pw_stream_add_listener_ptr(stream, listener, events, data);
}
extern int pw_stream_connect(pw_stream *stream, enum pw_direction direction, uint32_t target_id, enum pw_stream_flags flags, const spa_pod **params, uint32_t n_params) __attribute__((weak));
DISABLE_CFI_ICALL
int  pw_stream_connect(pw_stream *stream, enum pw_direction direction, uint32_t target_id, enum pw_stream_flags flags, const spa_pod **params, uint32_t n_params) {
  return pw_stream_connect_ptr(stream, direction, target_id, flags, params, n_params);
}
extern pw_buffer * pw_stream_dequeue_buffer(pw_stream *stream) __attribute__((weak));
DISABLE_CFI_ICALL
pw_buffer *  pw_stream_dequeue_buffer(pw_stream *stream) {
  return pw_stream_dequeue_buffer_ptr(stream);
}
extern void pw_stream_destroy(pw_stream *stream) __attribute__((weak));
DISABLE_CFI_ICALL
void  pw_stream_destroy(pw_stream *stream) {
  pw_stream_destroy_ptr(stream);
}
extern pw_stream * pw_stream_new(pw_core *core, const char *name, pw_properties *props) __attribute__((weak));
DISABLE_CFI_ICALL
pw_stream *  pw_stream_new(pw_core *core, const char *name, pw_properties *props) {
  return pw_stream_new_ptr(core, name, props);
}
extern int pw_stream_queue_buffer(pw_stream *stream, pw_buffer *buffer) __attribute__((weak));
DISABLE_CFI_ICALL
int  pw_stream_queue_buffer(pw_stream *stream, pw_buffer *buffer) {
  return pw_stream_queue_buffer_ptr(stream, buffer);
}
extern int pw_stream_set_active(pw_stream *stream, bool active) __attribute__((weak));
DISABLE_CFI_ICALL
int  pw_stream_set_active(pw_stream *stream, bool active) {
  return pw_stream_set_active_ptr(stream, active);
}
extern int pw_stream_update_params(pw_stream *stream, const spa_pod **params, uint32_t n_params) __attribute__((weak));
DISABLE_CFI_ICALL
int  pw_stream_update_params(pw_stream *stream, const spa_pod **params, uint32_t n_params) {
  return pw_stream_update_params_ptr(stream, params, n_params);
}
extern void pw_thread_loop_destroy(pw_thread_loop *loop) __attribute__((weak));
DISABLE_CFI_ICALL
void  pw_thread_loop_destroy(pw_thread_loop *loop) {
  pw_thread_loop_destroy_ptr(loop);
}
extern pw_thread_loop * pw_thread_loop_new(const char *name, const spa_dict *props) __attribute__((weak));
DISABLE_CFI_ICALL
pw_thread_loop *  pw_thread_loop_new(const char *name, const spa_dict *props) {
  return pw_thread_loop_new_ptr(name, props);
}
extern int pw_thread_loop_start(pw_thread_loop *loop) __attribute__((weak));
DISABLE_CFI_ICALL
int  pw_thread_loop_start(pw_thread_loop *loop) {
  return pw_thread_loop_start_ptr(loop);
}
extern void pw_thread_loop_stop(pw_thread_loop *loop) __attribute__((weak));
DISABLE_CFI_ICALL
void  pw_thread_loop_stop(pw_thread_loop *loop) {
  pw_thread_loop_stop_ptr(loop);
}
extern void pw_thread_loop_lock(pw_thread_loop *loop) __attribute__((weak));
DISABLE_CFI_ICALL
void  pw_thread_loop_lock(pw_thread_loop *loop) {
  pw_thread_loop_lock_ptr(loop);
}
extern void pw_thread_loop_unlock(pw_thread_loop *loop) __attribute__((weak));
DISABLE_CFI_ICALL
void  pw_thread_loop_unlock(pw_thread_loop *loop) {
  pw_thread_loop_unlock_ptr(loop);
}
extern pw_loop * pw_thread_loop_get_loop(pw_thread_loop *loop) __attribute__((weak));
DISABLE_CFI_ICALL
pw_loop *  pw_thread_loop_get_loop(pw_thread_loop *loop) {
  return pw_thread_loop_get_loop_ptr(loop);
}
extern void pw_context_destroy(pw_context *context) __attribute__((weak));
DISABLE_CFI_ICALL
void  pw_context_destroy(pw_context *context) {
  pw_context_destroy_ptr(context);
}
extern pw_context * pw_context_new(pw_loop *main_loop, pw_properties *props, size_t user_data_size) __attribute__((weak));
DISABLE_CFI_ICALL
pw_context *  pw_context_new(pw_loop *main_loop, pw_properties *props, size_t user_data_size) {
  return pw_context_new_ptr(main_loop, props, user_data_size);
}
extern pw_core * pw_context_connect(pw_context *context, pw_properties *properties, size_t user_data_size) __attribute__((weak));
DISABLE_CFI_ICALL
pw_core *  pw_context_connect(pw_context *context, pw_properties *properties, size_t user_data_size) {
  return pw_context_connect_ptr(context, properties, user_data_size);
}

}  // extern "C"


namespace modules_desktop_capture_linux {

// Returns true if all stubs have been properly initialized.
bool IsPipewire03Initialized() {
  return pw_core_disconnect_ptr &&
         pw_loop_destroy_ptr &&
         pw_loop_new_ptr &&
         pw_init_ptr &&
         pw_properties_new_string_ptr &&
         pw_stream_add_listener_ptr &&
         pw_stream_connect_ptr &&
         pw_stream_dequeue_buffer_ptr &&
         pw_stream_destroy_ptr &&
         pw_stream_new_ptr &&
         pw_stream_queue_buffer_ptr &&
         pw_stream_set_active_ptr &&
         pw_stream_update_params_ptr &&
         pw_thread_loop_destroy_ptr &&
         pw_thread_loop_new_ptr &&
         pw_thread_loop_start_ptr &&
         pw_thread_loop_stop_ptr &&
         pw_thread_loop_lock_ptr &&
         pw_thread_loop_unlock_ptr &&
         pw_thread_loop_get_loop_ptr &&
         pw_context_destroy_ptr &&
         pw_context_new_ptr &&
         pw_context_connect_ptr;
}

// Initializes the module stubs.
void InitializePipewire03(void* module) {
  const char pw_core_disconnect_name[] = "pw_core_disconnect";
  pw_core_disconnect_ptr =
    reinterpret_cast<int (*)(pw_core *core)>(
      dlsym(module, pw_core_disconnect_name));
  if (!pw_core_disconnect_ptr)
    LogDlerror(pw_core_disconnect_name);
  const char pw_loop_destroy_name[] = "pw_loop_destroy";
  pw_loop_destroy_ptr =
    reinterpret_cast<void (*)(pw_loop *loop)>(
      dlsym(module, pw_loop_destroy_name));
  if (!pw_loop_destroy_ptr)
    LogDlerror(pw_loop_destroy_name);
  const char pw_loop_new_name[] = "pw_loop_new";
  pw_loop_new_ptr =
    reinterpret_cast<pw_loop * (*)(const spa_dict *props)>(
      dlsym(module, pw_loop_new_name));
  if (!pw_loop_new_ptr)
    LogDlerror(pw_loop_new_name);
  const char pw_init_name[] = "pw_init";
  pw_init_ptr =
    reinterpret_cast<void (*)(int *argc, char **argv[])>(
      dlsym(module, pw_init_name));
  if (!pw_init_ptr)
    LogDlerror(pw_init_name);
  const char pw_properties_new_string_name[] = "pw_properties_new_string";
  pw_properties_new_string_ptr =
    reinterpret_cast<pw_properties * (*)(const char *args)>(
      dlsym(module, pw_properties_new_string_name));
  if (!pw_properties_new_string_ptr)
    LogDlerror(pw_properties_new_string_name);
  const char pw_stream_add_listener_name[] = "pw_stream_add_listener";
  pw_stream_add_listener_ptr =
    reinterpret_cast<void (*)(pw_stream *stream, spa_hook *listener, const pw_stream_events *events, void *data)>(
      dlsym(module, pw_stream_add_listener_name));
  if (!pw_stream_add_listener_ptr)
    LogDlerror(pw_stream_add_listener_name);
  const char pw_stream_connect_name[] = "pw_stream_connect";
  pw_stream_connect_ptr =
    reinterpret_cast<int (*)(pw_stream *stream, enum pw_direction direction, uint32_t target_id, enum pw_stream_flags flags, const spa_pod **params, uint32_t n_params)>(
      dlsym(module, pw_stream_connect_name));
  if (!pw_stream_connect_ptr)
    LogDlerror(pw_stream_connect_name);
  const char pw_stream_dequeue_buffer_name[] = "pw_stream_dequeue_buffer";
  pw_stream_dequeue_buffer_ptr =
    reinterpret_cast<pw_buffer * (*)(pw_stream *stream)>(
      dlsym(module, pw_stream_dequeue_buffer_name));
  if (!pw_stream_dequeue_buffer_ptr)
    LogDlerror(pw_stream_dequeue_buffer_name);
  const char pw_stream_destroy_name[] = "pw_stream_destroy";
  pw_stream_destroy_ptr =
    reinterpret_cast<void (*)(pw_stream *stream)>(
      dlsym(module, pw_stream_destroy_name));
  if (!pw_stream_destroy_ptr)
    LogDlerror(pw_stream_destroy_name);
  const char pw_stream_new_name[] = "pw_stream_new";
  pw_stream_new_ptr =
    reinterpret_cast<pw_stream * (*)(pw_core *core, const char *name, pw_properties *props)>(
      dlsym(module, pw_stream_new_name));
  if (!pw_stream_new_ptr)
    LogDlerror(pw_stream_new_name);
  const char pw_stream_queue_buffer_name[] = "pw_stream_queue_buffer";
  pw_stream_queue_buffer_ptr =
    reinterpret_cast<int (*)(pw_stream *stream, pw_buffer *buffer)>(
      dlsym(module, pw_stream_queue_buffer_name));
  if (!pw_stream_queue_buffer_ptr)
    LogDlerror(pw_stream_queue_buffer_name);
  const char pw_stream_set_active_name[] = "pw_stream_set_active";
  pw_stream_set_active_ptr =
    reinterpret_cast<int (*)(pw_stream *stream, bool active)>(
      dlsym(module, pw_stream_set_active_name));
  if (!pw_stream_set_active_ptr)
    LogDlerror(pw_stream_set_active_name);
  const char pw_stream_update_params_name[] = "pw_stream_update_params";
  pw_stream_update_params_ptr =
    reinterpret_cast<int (*)(pw_stream *stream, const spa_pod **params, uint32_t n_params)>(
      dlsym(module, pw_stream_update_params_name));
  if (!pw_stream_update_params_ptr)
    LogDlerror(pw_stream_update_params_name);
  const char pw_thread_loop_destroy_name[] = "pw_thread_loop_destroy";
  pw_thread_loop_destroy_ptr =
    reinterpret_cast<void (*)(pw_thread_loop *loop)>(
      dlsym(module, pw_thread_loop_destroy_name));
  if (!pw_thread_loop_destroy_ptr)
    LogDlerror(pw_thread_loop_destroy_name);
  const char pw_thread_loop_new_name[] = "pw_thread_loop_new";
  pw_thread_loop_new_ptr =
    reinterpret_cast<pw_thread_loop * (*)(const char *name, const spa_dict *props)>(
      dlsym(module, pw_thread_loop_new_name));
  if (!pw_thread_loop_new_ptr)
    LogDlerror(pw_thread_loop_new_name);
  const char pw_thread_loop_start_name[] = "pw_thread_loop_start";
  pw_thread_loop_start_ptr =
    reinterpret_cast<int (*)(pw_thread_loop *loop)>(
      dlsym(module, pw_thread_loop_start_name));
  if (!pw_thread_loop_start_ptr)
    LogDlerror(pw_thread_loop_start_name);
  const char pw_thread_loop_stop_name[] = "pw_thread_loop_stop";
  pw_thread_loop_stop_ptr =
    reinterpret_cast<void (*)(pw_thread_loop *loop)>(
      dlsym(module, pw_thread_loop_stop_name));
  if (!pw_thread_loop_stop_ptr)
    LogDlerror(pw_thread_loop_stop_name);
  const char pw_thread_loop_lock_name[] = "pw_thread_loop_lock";
  pw_thread_loop_lock_ptr =
    reinterpret_cast<void (*)(pw_thread_loop *loop)>(
      dlsym(module, pw_thread_loop_lock_name));
  if (!pw_thread_loop_lock_ptr)
    LogDlerror(pw_thread_loop_lock_name);
  const char pw_thread_loop_unlock_name[] = "pw_thread_loop_unlock";
  pw_thread_loop_unlock_ptr =
    reinterpret_cast<void (*)(pw_thread_loop *loop)>(
      dlsym(module, pw_thread_loop_unlock_name));
  if (!pw_thread_loop_unlock_ptr)
    LogDlerror(pw_thread_loop_unlock_name);
  const char pw_thread_loop_get_loop_name[] = "pw_thread_loop_get_loop";
  pw_thread_loop_get_loop_ptr =
    reinterpret_cast<pw_loop * (*)(pw_thread_loop *loop)>(
      dlsym(module, pw_thread_loop_get_loop_name));
  if (!pw_thread_loop_get_loop_ptr)
    LogDlerror(pw_thread_loop_get_loop_name);
  const char pw_context_destroy_name[] = "pw_context_destroy";
  pw_context_destroy_ptr =
    reinterpret_cast<void (*)(pw_context *context)>(
      dlsym(module, pw_context_destroy_name));
  if (!pw_context_destroy_ptr)
    LogDlerror(pw_context_destroy_name);
  const char pw_context_new_name[] = "pw_context_new";
  pw_context_new_ptr =
    reinterpret_cast<pw_context * (*)(pw_loop *main_loop, pw_properties *props, size_t user_data_size)>(
      dlsym(module, pw_context_new_name));
  if (!pw_context_new_ptr)
    LogDlerror(pw_context_new_name);
  const char pw_context_connect_name[] = "pw_context_connect";
  pw_context_connect_ptr =
    reinterpret_cast<pw_core * (*)(pw_context *context, pw_properties *properties, size_t user_data_size)>(
      dlsym(module, pw_context_connect_name));
  if (!pw_context_connect_ptr)
    LogDlerror(pw_context_connect_name);
}

// Uninitialize the module stubs.  Reset pointers to nullptr.
void UninitializePipewire03() {
  pw_core_disconnect_ptr = nullptr;
  pw_loop_destroy_ptr = nullptr;
  pw_loop_new_ptr = nullptr;
  pw_init_ptr = nullptr;
  pw_properties_new_string_ptr = nullptr;
  pw_stream_add_listener_ptr = nullptr;
  pw_stream_connect_ptr = nullptr;
  pw_stream_dequeue_buffer_ptr = nullptr;
  pw_stream_destroy_ptr = nullptr;
  pw_stream_new_ptr = nullptr;
  pw_stream_queue_buffer_ptr = nullptr;
  pw_stream_set_active_ptr = nullptr;
  pw_stream_update_params_ptr = nullptr;
  pw_thread_loop_destroy_ptr = nullptr;
  pw_thread_loop_new_ptr = nullptr;
  pw_thread_loop_start_ptr = nullptr;
  pw_thread_loop_stop_ptr = nullptr;
  pw_thread_loop_lock_ptr = nullptr;
  pw_thread_loop_unlock_ptr = nullptr;
  pw_thread_loop_get_loop_ptr = nullptr;
  pw_context_destroy_ptr = nullptr;
  pw_context_new_ptr = nullptr;
  pw_context_connect_ptr = nullptr;
}

}  // namespace modules_desktop_capture_linux

namespace modules_desktop_capture_linux {
typedef std::map<StubModules, void*> StubHandleMap;
static void CloseLibraries(StubHandleMap* stub_handles) {
  for (StubHandleMap::const_iterator it = stub_handles->begin();
       it != stub_handles->end();
       ++it) {
    dlclose(it->second);
  }

  stub_handles->clear();
}
bool InitializeStubs(const StubPathMap& path_map) {
  StubHandleMap opened_libraries;
  for (int i = 0; i < kNumStubModules; ++i) {
    StubModules cur_module = static_cast<StubModules>(i);
    // If a module is missing, we fail.
    StubPathMap::const_iterator it = path_map.find(cur_module);
    if (it == path_map.end()) {
      CloseLibraries(&opened_libraries);
      return false;
    }

    // Otherwise, attempt to dlopen the library.
    const std::vector<std::string>& paths = it->second;
    bool module_opened = false;
    for (std::vector<std::string>::const_iterator dso_path = paths.begin();
         !module_opened && dso_path != paths.end();
         ++dso_path) {
      void* handle = dlopen(dso_path->c_str(), RTLD_LAZY);
      if (handle) {
        module_opened = true;
        opened_libraries[cur_module] = handle;
      } else {
        RTC_LOG(LS_VERBOSE) << "dlopen(" << dso_path->c_str() << ") failed.";
        RTC_LOG(LS_VERBOSE) << "dlerror() says:\n" << dlerror();
      }
    }

    if (!module_opened) {
      CloseLibraries(&opened_libraries);
      return false;
    }
  }

  // Initialize each module if we have not already failed.
  InitializePipewire03(opened_libraries[kModulePipewire03]);

  // Check that each module is initialized correctly.
  // Close all previously opened libraries on failure.
  if (!IsPipewire03Initialized()) {
    UninitializePipewire03();
    CloseLibraries(&opened_libraries);
    return false;
  }

  return true;
}

}  // namespace modules_desktop_capture_linux
