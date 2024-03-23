#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IPresenceLocation)
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace Unity::Services::Vivox {
template <typename TK> class IKeyedItemNotifyPropertyChanged_1;
}
namespace Unity::Services::Vivox {
class IPresenceSubscription;
}
namespace Unity::Services::Vivox {
struct Presence;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class IPresenceLocation;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IPresenceLocation);
// Type: Unity.Services.Vivox::IPresenceLocation
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IPresenceLocation*
class CORDL_TYPE IPresenceLocation {
public:
  // Declarations
  __declspec(property(get = get_CurrentPresence))::Unity::Services::Vivox::Presence CurrentPresence;

  __declspec(property(get = get_LocationId))::StringW LocationId;

  __declspec(property(get = get_Subscription))::Unity::Services::Vivox::IPresenceSubscription* Subscription;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*() noexcept;

  /// @brief Method get_CurrentPresence, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::Presence get_CurrentPresence();

  /// @brief Method get_LocationId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_LocationId();

  /// @brief Method get_Subscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IPresenceSubscription* get_Subscription();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>* i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___StringW_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPresenceLocation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPresenceLocation(IPresenceLocation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPresenceLocation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPresenceLocation(IPresenceLocation const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IPresenceLocation);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IPresenceLocation*, "Unity.Services.Vivox", "IPresenceLocation");
