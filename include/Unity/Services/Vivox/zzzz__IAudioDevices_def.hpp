#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IAudioDevices)
namespace System::ComponentModel {
class INotifyPropertyChanged;
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
class IAudioDevice;
}
namespace Unity::Services::Vivox {
template <typename TK, typename T> class IReadOnlyDictionary_2;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class IAudioDevices;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IAudioDevices);
// Type: Unity.Services.Vivox::IAudioDevices
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IAudioDevices*
class CORDL_TYPE IAudioDevices {
public:
  // Declarations
  __declspec(property(get = get_ActiveDevice))::Unity::Services::Vivox::IAudioDevice* ActiveDevice;

  __declspec(property(get = get_AvailableDevices))::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IAudioDevice*>* AvailableDevices;

  __declspec(property(get = get_DeviceEnergy)) double_t DeviceEnergy;

  __declspec(property(get = get_EffectiveDevice))::Unity::Services::Vivox::IAudioDevice* EffectiveDevice;

  __declspec(property(get = get_Muted, put = set_Muted)) bool Muted;

  __declspec(property(get = get_SystemDevice))::Unity::Services::Vivox::IAudioDevice* SystemDevice;

  __declspec(property(get = get_VolumeAdjustment, put = set_VolumeAdjustment)) int32_t VolumeAdjustment;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Method BeginRefresh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginRefresh(::System::AsyncCallback* cb);

  /// @brief Method BeginSetActiveDevice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginSetActiveDevice(::Unity::Services::Vivox::IAudioDevice* device, ::System::AsyncCallback* callback);

  /// @brief Method EndRefresh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndRefresh(::System::IAsyncResult* result);

  /// @brief Method EndSetActiveDevice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndSetActiveDevice(::System::IAsyncResult* result);

  /// @brief Method RefreshDevicesAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* RefreshDevicesAsync(::System::AsyncCallback* cb);

  /// @brief Method SetActiveDeviceAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SetActiveDeviceAsync(::Unity::Services::Vivox::IAudioDevice* device, ::System::AsyncCallback* callback);

  /// @brief Method get_ActiveDevice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IAudioDevice* get_ActiveDevice();

  /// @brief Method get_AvailableDevices, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IAudioDevice*>* get_AvailableDevices();

  /// @brief Method get_DeviceEnergy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t get_DeviceEnergy();

  /// @brief Method get_EffectiveDevice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IAudioDevice* get_EffectiveDevice();

  /// @brief Method get_Muted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_Muted();

  /// @brief Method get_SystemDevice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IAudioDevice* get_SystemDevice();

  /// @brief Method get_VolumeAdjustment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_VolumeAdjustment();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Method set_Muted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Muted(bool value);

  /// @brief Method set_VolumeAdjustment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_VolumeAdjustment(int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "IAudioDevices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAudioDevices(IAudioDevices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAudioDevices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAudioDevices(IAudioDevices const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IAudioDevices);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IAudioDevices*, "Unity.Services.Vivox", "IAudioDevices");
