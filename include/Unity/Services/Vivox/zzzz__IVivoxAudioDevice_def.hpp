#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IVivoxAudioDevice)
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class IVivoxAudioDevice;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IVivoxAudioDevice);
// Type: Unity.Services.Vivox::IVivoxAudioDevice
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IVivoxAudioDevice*
class CORDL_TYPE IVivoxAudioDevice {
public:
  // Declarations
  __declspec(property(get = get_DeviceID))::StringW DeviceID;

  __declspec(property(get = get_DeviceName))::StringW DeviceName;

  /// @brief Method SetActiveDeviceAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SetActiveDeviceAsync();

  /// @brief Method get_DeviceID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_DeviceID();

  /// @brief Method get_DeviceName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_DeviceName();

  // Ctor Parameters [CppParam { name: "", ty: "IVivoxAudioDevice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVivoxAudioDevice(IVivoxAudioDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVivoxAudioDevice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVivoxAudioDevice(IVivoxAudioDevice const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IVivoxAudioDevice);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IVivoxAudioDevice*, "Unity.Services.Vivox", "IVivoxAudioDevice");
