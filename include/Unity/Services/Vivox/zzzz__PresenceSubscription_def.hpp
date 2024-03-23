#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PresenceSubscription)
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace Unity::Services::Vivox {
class AccountId;
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
template <typename TK, typename T> class IReadOnlyDictionary_2;
}
namespace Unity::Services::Vivox {
class PresenceLocation;
}
namespace Unity::Services::Vivox {
struct PresenceStatus;
}
namespace Unity::Services::Vivox {
template <typename TK, typename TI, typename T> class ReadWriteDictionary_3;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class PresenceSubscription;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::PresenceSubscription);
// Type: Unity.Services.Vivox::PresenceSubscription
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::PresenceSubscription*
class CORDL_TYPE PresenceSubscription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Key, put = set_Key))::Unity::Services::Vivox::AccountId* Key;

  __declspec(property(get = get_Locations))::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IPresenceLocation*>* Locations;

  /// @brief Field PropertyChanged, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanged, put = __cordl_internal_set_PropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  __declspec(property(get = get_SubscribedAccount))::Unity::Services::Vivox::AccountId* SubscribedAccount;

  /// @brief Field <Key>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField))::Unity::Services::Vivox::AccountId* _Key_k__BackingField;

  /// @brief Field _locations, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__locations,
                      put = __cordl_internal_set__locations))::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IPresenceLocation*,
                                                                                                             ::Unity::Services::Vivox::PresenceLocation*>* _locations;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IPresenceSubscription"
  constexpr operator ::Unity::Services::Vivox::IPresenceSubscription*() noexcept;

  static inline ::Unity::Services::Vivox::PresenceSubscription* New_ctor();

  /// @brief Method UpdateLocation, addr 0x2cac074, size 0x1c8, virtual false, abstract: false, final false
  inline void UpdateLocation(::StringW uriWithTag, ::Unity::Services::Vivox::PresenceStatus status, ::StringW message);

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanged() const;

  constexpr ::Unity::Services::Vivox::AccountId*& __cordl_internal_get__Key_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr ::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IPresenceLocation*, ::Unity::Services::Vivox::PresenceLocation*>*& __cordl_internal_get__locations();

  constexpr ::cordl_internals::to_const_pointer<
      ::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IPresenceLocation*, ::Unity::Services::Vivox::PresenceLocation*>*> const&
  __cordl_internal_get__locations() const;

  constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__Key_k__BackingField(::Unity::Services::Vivox::AccountId* value);

  constexpr void
  __cordl_internal_set__locations(::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IPresenceLocation*, ::Unity::Services::Vivox::PresenceLocation*>* value);

  /// @brief Method .ctor, addr 0x2ca75cc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_PropertyChanged, addr 0x2cabf24, size 0x9c, virtual true, abstract: false, final true
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method get_Key, addr 0x2cac05c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::AccountId* get_Key();

  /// @brief Method get_Locations, addr 0x2cac06c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IPresenceLocation*>* get_Locations();

  /// @brief Method get_SubscribedAccount, addr 0x2cac23c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::AccountId* get_SubscribedAccount();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*
  i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___Unity__Services__Vivox__AccountId__() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IPresenceSubscription"
  constexpr ::Unity::Services::Vivox::IPresenceSubscription* i___Unity__Services__Vivox__IPresenceSubscription() noexcept;

  /// @brief Method remove_PropertyChanged, addr 0x2cabfc0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method set_Key, addr 0x2cac064, size 0x8, virtual false, abstract: false, final false
  inline void set_Key(::Unity::Services::Vivox::AccountId* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PresenceSubscription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PresenceSubscription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PresenceSubscription(PresenceSubscription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PresenceSubscription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PresenceSubscription(PresenceSubscription const&) = delete;

  /// @brief Field _locations, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::ReadWriteDictionary_3<::StringW, ::Unity::Services::Vivox::IPresenceLocation*, ::Unity::Services::Vivox::PresenceLocation*>* ____locations;

  /// @brief Field PropertyChanged, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanged;

  /// @brief Field <Key>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* ____Key_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::PresenceSubscription, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::PresenceSubscription, ____locations) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::PresenceSubscription, ___PropertyChanged) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::PresenceSubscription, ____Key_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::PresenceSubscription);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::PresenceSubscription*, "Unity.Services.Vivox", "PresenceSubscription");
