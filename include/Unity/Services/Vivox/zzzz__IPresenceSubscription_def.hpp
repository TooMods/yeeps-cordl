#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IPresenceSubscription)
namespace System::ComponentModel {
class INotifyPropertyChanged;
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
template <typename TK, typename T> class IReadOnlyDictionary_2;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class IPresenceSubscription;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IPresenceSubscription);
// Type: Unity.Services.Vivox::IPresenceSubscription
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IPresenceSubscription*
class CORDL_TYPE IPresenceSubscription {
public:
  // Declarations
  __declspec(property(get = get_Locations))::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IPresenceLocation*>* Locations;

  __declspec(property(get = get_SubscribedAccount))::Unity::Services::Vivox::AccountId* SubscribedAccount;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*() noexcept;

  /// @brief Method get_Locations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IPresenceLocation*>* get_Locations();

  /// @brief Method get_SubscribedAccount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::AccountId* get_SubscribedAccount();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*
  i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___Unity__Services__Vivox__AccountId__() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPresenceSubscription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPresenceSubscription(IPresenceSubscription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPresenceSubscription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPresenceSubscription(IPresenceSubscription const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IPresenceSubscription);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IPresenceSubscription*, "Unity.Services.Vivox", "IPresenceSubscription");
