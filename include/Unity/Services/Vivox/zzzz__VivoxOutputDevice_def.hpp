#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VivoxOutputDevice)
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Unity::Services::Vivox {
class IAudioDevice;
}
namespace Unity::Services::Vivox {
class IVivoxAudioDevice;
}
namespace Unity::Services::Vivox {
struct __VivoxOutputDevice___SetActiveDeviceAsync_d__6;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class VivoxOutputDevice;
}
namespace Unity::Services::Vivox {
struct __VivoxOutputDevice___SetActiveDeviceAsync_d__6;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::VivoxOutputDevice);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxOutputDevice___SetActiveDeviceAsync_d__6);
// Type: ::<SetActiveDeviceAsync>d__6
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxOutputDevice::<SetActiveDeviceAsync>d__6
struct CORDL_TYPE __VivoxOutputDevice___SetActiveDeviceAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c1506c, size 0x22c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c15298, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxOutputDevice___SetActiveDeviceAsync_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxOutputDevice*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxOutputDevice___SetActiveDeviceAsync_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                            ::Unity::Services::Vivox::VivoxOutputDevice* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxOutputDevice* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxOutputDevice___SetActiveDeviceAsync_d__6, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxOutputDevice___SetActiveDeviceAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxOutputDevice___SetActiveDeviceAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxOutputDevice___SetActiveDeviceAsync_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxOutputDevice___SetActiveDeviceAsync_d__6, __u__1) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: Unity.Services.Vivox::VivoxOutputDevice
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::VivoxOutputDevice*
class CORDL_TYPE VivoxOutputDevice : public ::System::Object {
public:
  // Declarations
  using _SetActiveDeviceAsync_d__6 = ::Unity::Services::Vivox::__VivoxOutputDevice___SetActiveDeviceAsync_d__6;

  __declspec(property(get = get_DeviceID))::StringW DeviceID;

  __declspec(property(get = get_DeviceName))::StringW DeviceName;

  /// @brief Field m_parentDevice, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_parentDevice, put = __cordl_internal_set_m_parentDevice))::Unity::Services::Vivox::IAudioDevice* m_parentDevice;

  /// @brief Convert operator to "::Unity::Services::Vivox::IVivoxAudioDevice"
  constexpr operator ::Unity::Services::Vivox::IVivoxAudioDevice*() noexcept;

  static inline ::Unity::Services::Vivox::VivoxOutputDevice* New_ctor(::Unity::Services::Vivox::IAudioDevice* parentDevice);

  /// @brief Method SetActiveDeviceAsync, addr 0x1c14fa4, size 0xc8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SetActiveDeviceAsync();

  constexpr ::Unity::Services::Vivox::IAudioDevice*& __cordl_internal_get_m_parentDevice();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::IAudioDevice*> const& __cordl_internal_get_m_parentDevice() const;

  constexpr void __cordl_internal_set_m_parentDevice(::Unity::Services::Vivox::IAudioDevice* value);

  /// @brief Method .ctor, addr 0x1c14f7c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::IAudioDevice* parentDevice);

  /// @brief Method get_DeviceID, addr 0x1c14edc, size 0xa0, virtual true, abstract: false, final true
  inline ::StringW get_DeviceID();

  /// @brief Method get_DeviceName, addr 0x1c14e3c, size 0xa0, virtual true, abstract: false, final true
  inline ::StringW get_DeviceName();

  /// @brief Convert to "::Unity::Services::Vivox::IVivoxAudioDevice"
  constexpr ::Unity::Services::Vivox::IVivoxAudioDevice* i___Unity__Services__Vivox__IVivoxAudioDevice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxOutputDevice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxOutputDevice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxOutputDevice(VivoxOutputDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxOutputDevice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxOutputDevice(VivoxOutputDevice const&) = delete;

  /// @brief Field m_parentDevice, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::IAudioDevice* ___m_parentDevice;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VivoxOutputDevice, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxOutputDevice, ___m_parentDevice) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::VivoxOutputDevice);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VivoxOutputDevice*, "Unity.Services.Vivox", "VivoxOutputDevice");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxOutputDevice___SetActiveDeviceAsync_d__6, "Unity.Services.Vivox", "VivoxOutputDevice/<SetActiveDeviceAsync>d__6");
