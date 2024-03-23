#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioDevice)
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System {
class Object;
}
namespace Unity::Services::Vivox {
class IAudioDevice;
}
namespace Unity::Services::Vivox {
template <typename TK> class IKeyedItemNotifyPropertyChanged_1;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class AudioDevice;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::AudioDevice);
// Type: Unity.Services.Vivox::AudioDevice
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::AudioDevice*
class CORDL_TYPE AudioDevice : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Key, put = set_Key))::StringW Key;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  /// @brief Field PropertyChanged, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanged, put = __cordl_internal_set_PropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  /// @brief Field <Key>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField))::StringW _Key_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IAudioDevice"
  constexpr operator ::Unity::Services::Vivox::IAudioDevice*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*() noexcept;

  /// @brief Method Equals, addr 0x2fc7f70, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2fc806c, size 0x54, virtual false, abstract: false, final false
  inline bool Equals(::Unity::Services::Vivox::AudioDevice* other);

  /// @brief Method GetHashCode, addr 0x2fc80c0, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Unity::Services::Vivox::AudioDevice* New_ctor();

  /// @brief Method OnPropertyChanged, addr 0x2fc824c, size 0x98, virtual true, abstract: false, final false
  inline void OnPropertyChanged(::StringW propertyName);

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanged() const;

  constexpr ::StringW const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Key_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__Key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2fc82e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_PropertyChanged, addr 0x2fc8114, size 0x9c, virtual true, abstract: false, final true
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method get_Key, addr 0x2fc7f60, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Key();

  /// @brief Method get_Name, addr 0x2fc7f50, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Name();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IAudioDevice"
  constexpr ::Unity::Services::Vivox::IAudioDevice* i___Unity__Services__Vivox__IAudioDevice() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>* i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___StringW_() noexcept;

  /// @brief Method remove_PropertyChanged, addr 0x2fc81b0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method set_Key, addr 0x2fc7f68, size 0x8, virtual false, abstract: false, final false
  inline void set_Key(::StringW value);

  /// @brief Method set_Name, addr 0x2fc7f58, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioDevice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioDevice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioDevice(AudioDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioDevice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioDevice(AudioDevice const&) = delete;

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <Key>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Key_k__BackingField;

  /// @brief Field PropertyChanged, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::AudioDevice, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioDevice, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioDevice, ____Key_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AudioDevice, ___PropertyChanged) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::AudioDevice);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::AudioDevice*, "Unity.Services.Vivox", "AudioDevice");
