#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioOutputDevices)
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace Unity::Services::Vivox {
class AsyncNoResult;
}
namespace Unity::Services::Vivox {
class AudioDevice;
}
namespace Unity::Services::Vivox {
class IAudioDevice;
}
namespace Unity::Services::Vivox {
class IAudioDevices;
}
namespace Unity::Services::Vivox {
template <typename TK, typename T> class IReadOnlyDictionary_2;
}
namespace Unity::Services::Vivox {
template <typename TK, typename TI, typename T> class ReadWriteDictionary_3;
}
namespace Unity::Services::Vivox {
class VxClient;
}
namespace Unity::Services::Vivox {
struct __AudioOutputDevices___RefreshDevicesAsync_d__46;
}
namespace Unity::Services::Vivox {
struct __AudioOutputDevices___SetActiveDeviceAsync_d__45;
}
namespace Unity::Services::Vivox {
class __AudioOutputDevices____c__DisplayClass31_0;
}
namespace Unity::Services::Vivox {
class __AudioOutputDevices____c__DisplayClass35_0;
}
namespace Unity::Services::Vivox {
class __AudioOutputDevices____c__DisplayClass38_0;
}
namespace Unity::Services::Vivox {
class __AudioOutputDevices____c__DisplayClass39_0;
}
namespace Unity::Services::Vivox {
class vx_evt_base_t;
}
namespace Unity::Services::Vivox {
class vx_req_aux_get_render_devices_t;
}
namespace Unity::Services::Vivox {
class vx_req_aux_set_render_device_t;
}
namespace Unity::Services::Vivox {
class vx_req_aux_set_speaker_level_t;
}
namespace Unity::Services::Vivox {
class vx_req_connector_mute_local_speaker_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class AudioOutputDevices;
}
namespace Unity::Services::Vivox {
class __AudioOutputDevices____c__DisplayClass31_0;
}
namespace Unity::Services::Vivox {
class __AudioOutputDevices____c__DisplayClass35_0;
}
namespace Unity::Services::Vivox {
class __AudioOutputDevices____c__DisplayClass38_0;
}
namespace Unity::Services::Vivox {
class __AudioOutputDevices____c__DisplayClass39_0;
}
namespace Unity::Services::Vivox {
struct __AudioOutputDevices___RefreshDevicesAsync_d__46;
}
namespace Unity::Services::Vivox {
struct __AudioOutputDevices___SetActiveDeviceAsync_d__45;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::AudioOutputDevices);
MARK_REF_PTR_T(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0);
MARK_VAL_T(::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46);
MARK_VAL_T(::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45);
// Type: ::<>c__DisplayClass31_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::AudioOutputDevices::<>c__DisplayClass31_0*
class CORDL_TYPE __AudioOutputDevices____c__DisplayClass31_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::AudioOutputDevices* __4__this;

  /// @brief Field device, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_device, put = __cordl_internal_set_device))::Unity::Services::Vivox::IAudioDevice* device;

  /// @brief Field request, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_aux_set_render_device_t* request;

  /// @brief Field result, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_result, put = __cordl_internal_set_result))::Unity::Services::Vivox::AsyncNoResult* result;

  static inline ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0* New_ctor();

  /// @brief Method <BeginSetActiveDevice>b__0, addr 0x2fcbeac, size 0x64c, virtual false, abstract: false, final false
  inline void _BeginSetActiveDevice_b__0(::System::IAsyncResult* ar);

  constexpr ::Unity::Services::Vivox::AudioOutputDevices*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioOutputDevices*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::IAudioDevice*& __cordl_internal_get_device();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::IAudioDevice*> const& __cordl_internal_get_device() const;

  constexpr ::Unity::Services::Vivox::vx_req_aux_set_render_device_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_aux_set_render_device_t*> const& __cordl_internal_get_request() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_result();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_result() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::AudioOutputDevices* value);

  constexpr void __cordl_internal_set_device(::Unity::Services::Vivox::IAudioDevice* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_aux_set_render_device_t* value);

  constexpr void __cordl_internal_set_result(::Unity::Services::Vivox::AsyncNoResult* value);

  /// @brief Method .ctor, addr 0x2fcb27c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioOutputDevices____c__DisplayClass31_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AudioOutputDevices____c__DisplayClass31_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioOutputDevices____c__DisplayClass31_0(__AudioOutputDevices____c__DisplayClass31_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioOutputDevices____c__DisplayClass31_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioOutputDevices____c__DisplayClass31_0(__AudioOutputDevices____c__DisplayClass31_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AudioOutputDevices* _____4__this;

  /// @brief Field device, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::IAudioDevice* ___device;

  /// @brief Field result, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___result;

  /// @brief Field request, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_aux_set_render_device_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0, ___device) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0, ___result) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0, ___request) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass35_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::AudioOutputDevices::<>c__DisplayClass35_0*
class CORDL_TYPE __AudioOutputDevices____c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::AudioOutputDevices* __4__this;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_aux_set_speaker_level_t* request;

  static inline ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0* New_ctor();

  constexpr ::Unity::Services::Vivox::AudioOutputDevices*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioOutputDevices*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::vx_req_aux_set_speaker_level_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_aux_set_speaker_level_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::AudioOutputDevices* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_aux_set_speaker_level_t* value);

  /// @brief Method .ctor, addr 0x2fcb500, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_VolumeAdjustment>b__0, addr 0x2fcc4f8, size 0x110, virtual false, abstract: false, final false
  inline void _set_VolumeAdjustment_b__0(::System::IAsyncResult* ar);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioOutputDevices____c__DisplayClass35_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AudioOutputDevices____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioOutputDevices____c__DisplayClass35_0(__AudioOutputDevices____c__DisplayClass35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioOutputDevices____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioOutputDevices____c__DisplayClass35_0(__AudioOutputDevices____c__DisplayClass35_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AudioOutputDevices* _____4__this;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_aux_set_speaker_level_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass38_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::AudioOutputDevices::<>c__DisplayClass38_0*
class CORDL_TYPE __AudioOutputDevices____c__DisplayClass38_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::AudioOutputDevices* __4__this;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_connector_mute_local_speaker_t* request;

  static inline ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0* New_ctor();

  constexpr ::Unity::Services::Vivox::AudioOutputDevices*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioOutputDevices*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::vx_req_connector_mute_local_speaker_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_connector_mute_local_speaker_t*> const& __cordl_internal_get_request() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::AudioOutputDevices* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_connector_mute_local_speaker_t* value);

  /// @brief Method .ctor, addr 0x2fcb6bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_Muted>b__0, addr 0x2fcc608, size 0x110, virtual false, abstract: false, final false
  inline void _set_Muted_b__0(::System::IAsyncResult* ar);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioOutputDevices____c__DisplayClass38_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AudioOutputDevices____c__DisplayClass38_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioOutputDevices____c__DisplayClass38_0(__AudioOutputDevices____c__DisplayClass38_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioOutputDevices____c__DisplayClass38_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioOutputDevices____c__DisplayClass38_0(__AudioOutputDevices____c__DisplayClass38_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AudioOutputDevices* _____4__this;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_connector_mute_local_speaker_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0, ___request) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass39_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::AudioOutputDevices::<>c__DisplayClass39_0*
class CORDL_TYPE __AudioOutputDevices____c__DisplayClass39_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::AudioOutputDevices* __4__this;

  /// @brief Field request, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request))::Unity::Services::Vivox::vx_req_aux_get_render_devices_t* request;

  /// @brief Field result, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_result, put = __cordl_internal_set_result))::Unity::Services::Vivox::AsyncNoResult* result;

  static inline ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0* New_ctor();

  /// @brief Method <BeginRefresh>b__0, addr 0x2fcc718, size 0x870, virtual false, abstract: false, final false
  inline void _BeginRefresh_b__0(::System::IAsyncResult* ar);

  constexpr ::Unity::Services::Vivox::AudioOutputDevices*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioOutputDevices*> const& __cordl_internal_get___4__this() const;

  constexpr ::Unity::Services::Vivox::vx_req_aux_get_render_devices_t*& __cordl_internal_get_request();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::vx_req_aux_get_render_devices_t*> const& __cordl_internal_get_request() const;

  constexpr ::Unity::Services::Vivox::AsyncNoResult*& __cordl_internal_get_result();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AsyncNoResult*> const& __cordl_internal_get_result() const;

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::AudioOutputDevices* value);

  constexpr void __cordl_internal_set_request(::Unity::Services::Vivox::vx_req_aux_get_render_devices_t* value);

  constexpr void __cordl_internal_set_result(::Unity::Services::Vivox::AsyncNoResult* value);

  /// @brief Method .ctor, addr 0x2fcb824, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioOutputDevices____c__DisplayClass39_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AudioOutputDevices____c__DisplayClass39_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioOutputDevices____c__DisplayClass39_0(__AudioOutputDevices____c__DisplayClass39_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioOutputDevices____c__DisplayClass39_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioOutputDevices____c__DisplayClass39_0(__AudioOutputDevices____c__DisplayClass39_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::AudioOutputDevices* _____4__this;

  /// @brief Field result, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::AsyncNoResult* ___result;

  /// @brief Field request, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::vx_req_aux_get_render_devices_t* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0, ___result) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0, ___request) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<SetActiveDeviceAsync>d__45
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::AudioOutputDevices::<SetActiveDeviceAsync>d__45
struct CORDL_TYPE __AudioOutputDevices___SetActiveDeviceAsync_d__45 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2fccf88, size 0x2c0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2fcd248, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioOutputDevices___SetActiveDeviceAsync_d__45();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::AudioOutputDevices*", modifiers: "",
  // def_value: None }, CppParam { name: "device", ty: "::Unity::Services::Vivox::IAudioDevice*", modifiers: "", def_value: None }, CppParam { name: "callback", ty: "::System::AsyncCallback*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
  constexpr __AudioOutputDevices___SetActiveDeviceAsync_d__45(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                              ::Unity::Services::Vivox::AudioOutputDevices* __4__this, ::Unity::Services::Vivox::IAudioDevice* device,
                                                              ::System::AsyncCallback* callback, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::AudioOutputDevices* __4__this;

  /// @brief Field device, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::IAudioDevice* device;

  /// @brief Field callback, offset: 0x30, size: 0x8, def value: None
  ::System::AsyncCallback* callback;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45, device) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45, callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45, __u__1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<RefreshDevicesAsync>d__46
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::AudioOutputDevices::<RefreshDevicesAsync>d__46
struct CORDL_TYPE __AudioOutputDevices___RefreshDevicesAsync_d__46 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2fcd254, size 0x2c0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2fcd514, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioOutputDevices___RefreshDevicesAsync_d__46();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::AudioOutputDevices*", modifiers: "",
  // def_value: None }, CppParam { name: "cb", ty: "::System::AsyncCallback*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None }]
  constexpr __AudioOutputDevices___RefreshDevicesAsync_d__46(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                             ::Unity::Services::Vivox::AudioOutputDevices* __4__this, ::System::AsyncCallback* cb,
                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::AudioOutputDevices* __4__this;

  /// @brief Field cb, offset: 0x28, size: 0x8, def value: None
  ::System::AsyncCallback* cb;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46, cb) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: Unity.Services.Vivox::AudioOutputDevices
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::AudioOutputDevices*
class CORDL_TYPE AudioOutputDevices : public ::System::Object {
public:
  // Declarations
  using _RefreshDevicesAsync_d__46 = ::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46;

  using _SetActiveDeviceAsync_d__45 = ::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45;

  using __c__DisplayClass31_0 = ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0;

  using __c__DisplayClass35_0 = ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0;

  using __c__DisplayClass38_0 = ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0;

  using __c__DisplayClass39_0 = ::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0;

  __declspec(property(get = get_ActiveDevice))::Unity::Services::Vivox::IAudioDevice* ActiveDevice;

  __declspec(property(get = get_AvailableDevices))::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IAudioDevice*>* AvailableDevices;

  __declspec(property(get = get_CommunicationDevice))::Unity::Services::Vivox::IAudioDevice* CommunicationDevice;

  /// @brief Field DefaultCommunicationDevice, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_DefaultCommunicationDevice, put = __cordl_internal_set_DefaultCommunicationDevice))::StringW DefaultCommunicationDevice;

  /// @brief Field DefaultSystemDevice, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_DefaultSystemDevice, put = __cordl_internal_set_DefaultSystemDevice))::StringW DefaultSystemDevice;

  __declspec(property(get = get_DeviceEnergy)) double_t DeviceEnergy;

  __declspec(property(get = get_EffectiveDevice))::Unity::Services::Vivox::IAudioDevice* EffectiveDevice;

  __declspec(property(get = get_Muted, put = set_Muted)) bool Muted;

  /// @brief Field PropertyChanged, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanged, put = __cordl_internal_set_PropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  __declspec(property(get = get_SystemDevice))::Unity::Services::Vivox::IAudioDevice* SystemDevice;

  __declspec(property(get = get_VolumeAdjustment, put = set_VolumeAdjustment)) int32_t VolumeAdjustment;

  /// @brief Field _activeDevice, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__activeDevice, put = __cordl_internal_set__activeDevice))::Unity::Services::Vivox::AudioDevice* _activeDevice;

  /// @brief Field _client, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__client, put = __cordl_internal_set__client))::Unity::Services::Vivox::VxClient* _client;

  /// @brief Field _currentCommunicationDevice, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__currentCommunicationDevice,
                      put = __cordl_internal_set__currentCommunicationDevice))::Unity::Services::Vivox::AudioDevice* _currentCommunicationDevice;

  /// @brief Field _currentSystemDevice, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__currentSystemDevice, put = __cordl_internal_set__currentSystemDevice))::Unity::Services::Vivox::AudioDevice* _currentSystemDevice;

  /// @brief Field _defaultCommunicationDevice, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultCommunicationDevice,
                      put = __cordl_internal_set__defaultCommunicationDevice))::Unity::Services::Vivox::AudioDevice* _defaultCommunicationDevice;

  /// @brief Field _defaultSystemDevice, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultSystemDevice, put = __cordl_internal_set__defaultSystemDevice))::Unity::Services::Vivox::AudioDevice* _defaultSystemDevice;

  /// @brief Field _deviceEnergy, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceEnergy, put = __cordl_internal_set__deviceEnergy)) double_t _deviceEnergy;

  /// @brief Field _devices, offset 0x68, size 0x8
  __declspec(property(
      get = __cordl_internal_get__devices,
      put = __cordl_internal_set__devices))::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IAudioDevice*, ::Unity::Services::Vivox::AudioDevice*>* _devices;

  /// @brief Field _effectiveDevice, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__effectiveDevice, put = __cordl_internal_set__effectiveDevice))::Unity::Services::Vivox::AudioDevice* _effectiveDevice;

  /// @brief Field _muted, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get__muted, put = __cordl_internal_set__muted)) bool _muted;

  /// @brief Field _volumeAdjustment, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__volumeAdjustment, put = __cordl_internal_set__volumeAdjustment)) int32_t _volumeAdjustment;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IAudioDevices"
  constexpr operator ::Unity::Services::Vivox::IAudioDevices*() noexcept;

  /// @brief Method BeginRefresh, addr 0x2fcb6c4, size 0x160, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginRefresh(::System::AsyncCallback* callback);

  /// @brief Method BeginSetActiveDevice, addr 0x2fcb070, size 0x20c, virtual true, abstract: false, final true
  inline ::System::IAsyncResult* BeginSetActiveDevice(::Unity::Services::Vivox::IAudioDevice* device, ::System::AsyncCallback* callback);

  /// @brief Method Clear, addr 0x2fcb9c8, size 0x64, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ConvertGain, addr 0x2fcac04, size 0x8, virtual false, abstract: false, final false
  inline int32_t ConvertGain(int32_t gain);

  /// @brief Method EndRefresh, addr 0x2fcb82c, size 0x84, virtual true, abstract: false, final true
  inline void EndRefresh(::System::IAsyncResult* result);

  /// @brief Method EndSetActiveDevice, addr 0x2fcb284, size 0x84, virtual true, abstract: false, final true
  inline void EndSetActiveDevice(::System::IAsyncResult* result);

  /// @brief Method Finalize, addr 0x2fcadec, size 0x11c, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method HandleDeviceAudioProperties, addr 0x2fcb998, size 0x30, virtual false, abstract: false, final false
  inline void HandleDeviceAudioProperties(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method HandleDeviceHotSwap, addr 0x2fcb918, size 0x80, virtual false, abstract: false, final false
  inline void HandleDeviceHotSwap(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  static inline ::Unity::Services::Vivox::AudioOutputDevices* New_ctor(::Unity::Services::Vivox::VxClient* client);

  /// @brief Method OnEventMessageReceived, addr 0x2fcb8b0, size 0x68, virtual false, abstract: false, final false
  inline void OnEventMessageReceived(::Unity::Services::Vivox::vx_evt_base_t* eventMessage);

  /// @brief Method RefreshDevicesAsync, addr 0x2fcbb08, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* RefreshDevicesAsync(::System::AsyncCallback* cb);

  /// @brief Method SetActiveDeviceAsync, addr 0x2fcba2c, size 0xdc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SetActiveDeviceAsync(::Unity::Services::Vivox::IAudioDevice* device, ::System::AsyncCallback* callback);

  /// @brief Method <HandleDeviceHotSwap>b__42_0, addr 0x2fcbbe4, size 0xa8, virtual false, abstract: false, final false
  inline void _HandleDeviceHotSwap_b__42_0(::System::IAsyncResult* result);

  /// @brief Method <RefreshDevicesAsync>b__46_0, addr 0x2fcbd9c, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _RefreshDevicesAsync_b__46_0(::System::IAsyncResult* ar);

  /// @brief Method <SetActiveDeviceAsync>b__45_0, addr 0x2fcbc8c, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _SetActiveDeviceAsync_b__45_0(::System::IAsyncResult* ar);

  constexpr ::StringW const& __cordl_internal_get_DefaultCommunicationDevice() const;

  constexpr ::StringW& __cordl_internal_get_DefaultCommunicationDevice();

  constexpr ::StringW const& __cordl_internal_get_DefaultSystemDevice() const;

  constexpr ::StringW& __cordl_internal_get_DefaultSystemDevice();

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanged() const;

  constexpr ::Unity::Services::Vivox::AudioDevice*& __cordl_internal_get__activeDevice();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& __cordl_internal_get__activeDevice() const;

  constexpr ::Unity::Services::Vivox::VxClient*& __cordl_internal_get__client();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::VxClient*> const& __cordl_internal_get__client() const;

  constexpr ::Unity::Services::Vivox::AudioDevice*& __cordl_internal_get__currentCommunicationDevice();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& __cordl_internal_get__currentCommunicationDevice() const;

  constexpr ::Unity::Services::Vivox::AudioDevice*& __cordl_internal_get__currentSystemDevice();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& __cordl_internal_get__currentSystemDevice() const;

  constexpr ::Unity::Services::Vivox::AudioDevice*& __cordl_internal_get__defaultCommunicationDevice();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& __cordl_internal_get__defaultCommunicationDevice() const;

  constexpr ::Unity::Services::Vivox::AudioDevice*& __cordl_internal_get__defaultSystemDevice();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& __cordl_internal_get__defaultSystemDevice() const;

  constexpr double_t const& __cordl_internal_get__deviceEnergy() const;

  constexpr double_t& __cordl_internal_get__deviceEnergy();

  constexpr ::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IAudioDevice*, ::Unity::Services::Vivox::AudioDevice*>*& __cordl_internal_get__devices();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IAudioDevice*, ::Unity::Services::Vivox::AudioDevice*>*> const&
  __cordl_internal_get__devices() const;

  constexpr ::Unity::Services::Vivox::AudioDevice*& __cordl_internal_get__effectiveDevice();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AudioDevice*> const& __cordl_internal_get__effectiveDevice() const;

  constexpr bool const& __cordl_internal_get__muted() const;

  constexpr bool& __cordl_internal_get__muted();

  constexpr int32_t const& __cordl_internal_get__volumeAdjustment() const;

  constexpr int32_t& __cordl_internal_get__volumeAdjustment();

  constexpr void __cordl_internal_set_DefaultCommunicationDevice(::StringW value);

  constexpr void __cordl_internal_set_DefaultSystemDevice(::StringW value);

  constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__activeDevice(::Unity::Services::Vivox::AudioDevice* value);

  constexpr void __cordl_internal_set__client(::Unity::Services::Vivox::VxClient* value);

  constexpr void __cordl_internal_set__currentCommunicationDevice(::Unity::Services::Vivox::AudioDevice* value);

  constexpr void __cordl_internal_set__currentSystemDevice(::Unity::Services::Vivox::AudioDevice* value);

  constexpr void __cordl_internal_set__defaultCommunicationDevice(::Unity::Services::Vivox::AudioDevice* value);

  constexpr void __cordl_internal_set__defaultSystemDevice(::Unity::Services::Vivox::AudioDevice* value);

  constexpr void __cordl_internal_set__deviceEnergy(double_t value);

  constexpr void __cordl_internal_set__devices(::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IAudioDevice*, ::Unity::Services::Vivox::AudioDevice*>* value);

  constexpr void __cordl_internal_set__effectiveDevice(::Unity::Services::Vivox::AudioDevice* value);

  constexpr void __cordl_internal_set__muted(bool value);

  constexpr void __cordl_internal_set__volumeAdjustment(int32_t value);

  /// @brief Method .ctor, addr 0x2fcac0c, size 0x1e0, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::VxClient* client);

  /// @brief Method add_PropertyChanged, addr 0x2fcaf08, size 0x9c, virtual true, abstract: false, final true
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method get_ActiveDevice, addr 0x2fcb050, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IAudioDevice* get_ActiveDevice();

  /// @brief Method get_AvailableDevices, addr 0x2fcb060, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IAudioDevice*>* get_AvailableDevices();

  /// @brief Method get_CommunicationDevice, addr 0x2fcb048, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::IAudioDevice* get_CommunicationDevice();

  /// @brief Method get_DeviceEnergy, addr 0x2fcb068, size 0x8, virtual true, abstract: false, final true
  inline double_t get_DeviceEnergy();

  /// @brief Method get_EffectiveDevice, addr 0x2fcb058, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IAudioDevice* get_EffectiveDevice();

  /// @brief Method get_Muted, addr 0x2fcb508, size 0x8, virtual true, abstract: false, final true
  inline bool get_Muted();

  /// @brief Method get_SystemDevice, addr 0x2fcb040, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IAudioDevice* get_SystemDevice();

  /// @brief Method get_VolumeAdjustment, addr 0x2fcb308, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_VolumeAdjustment();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IAudioDevices"
  constexpr ::Unity::Services::Vivox::IAudioDevices* i___Unity__Services__Vivox__IAudioDevices() noexcept;

  /// @brief Method remove_PropertyChanged, addr 0x2fcafa4, size 0x9c, virtual true, abstract: false, final true
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method set_Muted, addr 0x2fcb510, size 0x1ac, virtual true, abstract: false, final true
  inline void set_Muted(bool value);

  /// @brief Method set_VolumeAdjustment, addr 0x2fcb310, size 0x1f0, virtual true, abstract: false, final true
  inline void set_VolumeAdjustment(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioOutputDevices();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioOutputDevices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioOutputDevices(AudioOutputDevices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioOutputDevices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioOutputDevices(AudioOutputDevices const&) = delete;

  /// @brief Field DefaultSystemDevice, offset: 0x10, size: 0x8, def value: None
  ::StringW ___DefaultSystemDevice;

  /// @brief Field DefaultCommunicationDevice, offset: 0x18, size: 0x8, def value: None
  ::StringW ___DefaultCommunicationDevice;

  /// @brief Field _defaultSystemDevice, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::AudioDevice* ____defaultSystemDevice;

  /// @brief Field _defaultCommunicationDevice, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::AudioDevice* ____defaultCommunicationDevice;

  /// @brief Field _currentSystemDevice, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::AudioDevice* ____currentSystemDevice;

  /// @brief Field _currentCommunicationDevice, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::AudioDevice* ____currentCommunicationDevice;

  /// @brief Field _activeDevice, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Vivox::AudioDevice* ____activeDevice;

  /// @brief Field _effectiveDevice, offset: 0x48, size: 0x8, def value: None
  ::Unity::Services::Vivox::AudioDevice* ____effectiveDevice;

  /// @brief Field _volumeAdjustment, offset: 0x50, size: 0x4, def value: None
  int32_t ____volumeAdjustment;

  /// @brief Field _muted, offset: 0x54, size: 0x1, def value: None
  bool ____muted;

  /// @brief Field _deviceEnergy, offset: 0x58, size: 0x8, def value: None
  double_t ____deviceEnergy;

  /// @brief Field _client, offset: 0x60, size: 0x8, def value: None
  ::Unity::Services::Vivox::VxClient* ____client;

  /// @brief Field _devices, offset: 0x68, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IAudioDevice*, ::Unity::Services::Vivox::AudioDevice*>* ____devices;

  /// @brief Field PropertyChanged, offset: 0x70, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::AudioOutputDevices, 0x78>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioOutputDevices, ___DefaultSystemDevice) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioOutputDevices, ___DefaultCommunicationDevice) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioOutputDevices, ____defaultSystemDevice) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioOutputDevices, ____defaultCommunicationDevice) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioOutputDevices, ____currentSystemDevice) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioOutputDevices, ____currentCommunicationDevice) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioOutputDevices, ____activeDevice) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioOutputDevices, ____effectiveDevice) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioOutputDevices, ____volumeAdjustment) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioOutputDevices, ____muted) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioOutputDevices, ____deviceEnergy) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioOutputDevices, ____client) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioOutputDevices, ____devices) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioOutputDevices, ___PropertyChanged) == 0x70, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::AudioOutputDevices);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::AudioOutputDevices*, "Unity.Services.Vivox", "AudioOutputDevices");
NEED_NO_BOX(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass31_0*, "Unity.Services.Vivox", "AudioOutputDevices/<>c__DisplayClass31_0");
NEED_NO_BOX(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass35_0*, "Unity.Services.Vivox", "AudioOutputDevices/<>c__DisplayClass35_0");
NEED_NO_BOX(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass38_0*, "Unity.Services.Vivox", "AudioOutputDevices/<>c__DisplayClass38_0");
NEED_NO_BOX(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__AudioOutputDevices____c__DisplayClass39_0*, "Unity.Services.Vivox", "AudioOutputDevices/<>c__DisplayClass39_0");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__AudioOutputDevices___RefreshDevicesAsync_d__46, "Unity.Services.Vivox", "AudioOutputDevices/<RefreshDevicesAsync>d__46");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__AudioOutputDevices___SetActiveDeviceAsync_d__45, "Unity.Services.Vivox", "AudioOutputDevices/<SetActiveDeviceAsync>d__45");
