#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/zzzz__Presence_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PresenceLocation)
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace Unity::Services::Vivox {
template <typename TK> class IKeyedItemNotifyPropertyChanged_1;
}
namespace Unity::Services::Vivox {
class IPresenceLocation;
}
namespace Unity::Services::Vivox {
class IPresenceSubscription;
}
namespace Unity::Services::Vivox {
struct Presence;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class PresenceLocation;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::PresenceLocation);
// Type: Unity.Services.Vivox::PresenceLocation
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::PresenceLocation*
class CORDL_TYPE PresenceLocation : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CurrentPresence, put = set_CurrentPresence))::Unity::Services::Vivox::Presence CurrentPresence;

  __declspec(property(get = get_Key))::StringW Key;

  __declspec(property(get = get_Location, put = set_Location))::StringW Location;

  __declspec(property(get = get_LocationId))::StringW LocationId;

  /// @brief Field PropertyChanged, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanged, put = __cordl_internal_set_PropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  __declspec(property(get = get_Subscription, put = set_Subscription))::Unity::Services::Vivox::IPresenceSubscription* Subscription;

  /// @brief Field <Key>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField))::StringW _Key_k__BackingField;

  /// @brief Field <Subscription>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Subscription_k__BackingField,
                      put = __cordl_internal_set__Subscription_k__BackingField))::Unity::Services::Vivox::IPresenceSubscription* _Subscription_k__BackingField;

  /// @brief Field _currentPresence, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__currentPresence, put = __cordl_internal_set__currentPresence))::Unity::Services::Vivox::Presence _currentPresence;

  /// @brief Field _location, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__location, put = __cordl_internal_set__location))::StringW _location;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IPresenceLocation"
  constexpr operator ::Unity::Services::Vivox::IPresenceLocation*() noexcept;

  static inline ::Unity::Services::Vivox::PresenceLocation* New_ctor(::StringW key);

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanged() const;

  constexpr ::StringW const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Key_k__BackingField();

  constexpr ::Unity::Services::Vivox::IPresenceSubscription*& __cordl_internal_get__Subscription_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::IPresenceSubscription*> const& __cordl_internal_get__Subscription_k__BackingField() const;

  constexpr ::Unity::Services::Vivox::Presence const& __cordl_internal_get__currentPresence() const;

  constexpr ::Unity::Services::Vivox::Presence& __cordl_internal_get__currentPresence();

  constexpr ::StringW const& __cordl_internal_get__location() const;

  constexpr ::StringW& __cordl_internal_get__location();

  constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__Key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Subscription_k__BackingField(::Unity::Services::Vivox::IPresenceSubscription* value);

  constexpr void __cordl_internal_set__currentPresence(::Unity::Services::Vivox::Presence value);

  constexpr void __cordl_internal_set__location(::StringW value);

  /// @brief Method .ctor, addr 0x2cabd20, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW key);

  /// @brief Method add_PropertyChanged, addr 0x2cabbe8, size 0x9c, virtual true, abstract: false, final true
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method get_CurrentPresence, addr 0x2cabd54, size 0xc, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::Presence get_CurrentPresence();

  /// @brief Method get_Key, addr 0x2cabd4c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Key();

  /// @brief Method get_Location, addr 0x2cabe4c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Location();

  /// @brief Method get_LocationId, addr 0x2cabf1c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_LocationId();

  /// @brief Method get_Subscription, addr 0x2cabf0c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IPresenceSubscription* get_Subscription();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>* i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___StringW_() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IPresenceLocation"
  constexpr ::Unity::Services::Vivox::IPresenceLocation* i___Unity__Services__Vivox__IPresenceLocation() noexcept;

  /// @brief Method remove_PropertyChanged, addr 0x2cabc84, size 0x9c, virtual true, abstract: false, final true
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method set_CurrentPresence, addr 0x2cabd60, size 0xec, virtual false, abstract: false, final false
  inline void set_CurrentPresence(::Unity::Services::Vivox::Presence value);

  /// @brief Method set_Location, addr 0x2cabe54, size 0xb8, virtual false, abstract: false, final false
  inline void set_Location(::StringW value);

  /// @brief Method set_Subscription, addr 0x2cabf14, size 0x8, virtual false, abstract: false, final false
  inline void set_Subscription(::Unity::Services::Vivox::IPresenceSubscription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PresenceLocation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PresenceLocation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PresenceLocation(PresenceLocation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PresenceLocation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PresenceLocation(PresenceLocation const&) = delete;

  /// @brief Field _currentPresence, offset: 0x10, size: 0x10, def value: None
  ::Unity::Services::Vivox::Presence ____currentPresence;

  /// @brief Field _location, offset: 0x20, size: 0x8, def value: None
  ::StringW ____location;

  /// @brief Field PropertyChanged, offset: 0x28, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanged;

  /// @brief Field <Key>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____Key_k__BackingField;

  /// @brief Field <Subscription>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::IPresenceSubscription* ____Subscription_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::PresenceLocation, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::PresenceLocation, ____currentPresence) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::PresenceLocation, ____location) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::PresenceLocation, ___PropertyChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::PresenceLocation, ____Key_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::PresenceLocation, ____Subscription_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::PresenceLocation);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::PresenceLocation*, "Unity.Services.Vivox", "PresenceLocation");
