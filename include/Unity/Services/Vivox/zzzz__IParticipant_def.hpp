#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IParticipant)
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace Unity::Services::Vivox {
class AccountId;
}
namespace Unity::Services::Vivox {
class IChannelSession;
}
namespace Unity::Services::Vivox {
template <typename TK> class IKeyedItemNotifyPropertyChanged_1;
}
namespace Unity::Services::Vivox {
class IParticipantProperties;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class IParticipant;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IParticipant);
// Type: Unity.Services.Vivox::IParticipant
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IParticipant*
class CORDL_TYPE IParticipant {
public:
  // Declarations
  __declspec(property(get = get_Account))::Unity::Services::Vivox::AccountId* Account;

  __declspec(property(get = get_ParentChannelSession))::Unity::Services::Vivox::IChannelSession* ParentChannelSession;

  __declspec(property(get = get_ParticipantId))::StringW ParticipantId;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IParticipantProperties"
  constexpr operator ::Unity::Services::Vivox::IParticipantProperties*() noexcept;

  /// @brief Method SetIsMuteForAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* SetIsMuteForAll(::StringW accountHandle, bool setMuted, ::StringW accessToken, ::System::AsyncCallback* callback);

  /// @brief Method SetIsMuteForAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* SetIsMuteForAll(::StringW accountHandle, bool setMuted, ::System::AsyncCallback* callback);

  /// @brief Method SetIsMuteForAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* SetIsMuteForAll(bool setMuted, ::StringW accessToken, ::System::AsyncCallback* callback);

  /// @brief Method SetIsMuteForAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* SetIsMuteForAll(bool setMuted, ::System::AsyncCallback* callback);

  /// @brief Method get_Account, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::AccountId* get_Account();

  /// @brief Method get_ParentChannelSession, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IChannelSession* get_ParentChannelSession();

  /// @brief Method get_ParticipantId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_ParticipantId();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>* i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___StringW_() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IParticipantProperties"
  constexpr ::Unity::Services::Vivox::IParticipantProperties* i___Unity__Services__Vivox__IParticipantProperties() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IParticipant", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IParticipant(IParticipant&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IParticipant", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IParticipant(IParticipant const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IParticipant);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IParticipant*, "Unity.Services.Vivox", "IParticipant");
