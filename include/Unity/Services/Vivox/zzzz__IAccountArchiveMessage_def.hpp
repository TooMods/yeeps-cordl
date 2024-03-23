#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAccountArchiveMessage)
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
class ILoginSession;
}
namespace Unity::Services::Vivox {
class ITextMessage;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class IAccountArchiveMessage;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IAccountArchiveMessage);
// Type: Unity.Services.Vivox::IAccountArchiveMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IAccountArchiveMessage*
class CORDL_TYPE IAccountArchiveMessage {
public:
  // Declarations
  __declspec(property(get = get_Inbound)) bool Inbound;

  __declspec(property(get = get_LoginSession))::Unity::Services::Vivox::ILoginSession* LoginSession;

  __declspec(property(get = get_MessageId))::StringW MessageId;

  __declspec(property(get = get_QueryId))::StringW QueryId;

  __declspec(property(get = get_RemoteParticipant))::Unity::Services::Vivox::AccountId* RemoteParticipant;

  __declspec(property(get = get_Sender))::Unity::Services::Vivox::AccountId* Sender;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::ITextMessage"
  constexpr operator ::Unity::Services::Vivox::ITextMessage*() noexcept;

  /// @brief Method get_Inbound, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_Inbound();

  /// @brief Method get_LoginSession, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::ILoginSession* get_LoginSession();

  /// @brief Method get_MessageId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_MessageId();

  /// @brief Method get_QueryId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_QueryId();

  /// @brief Method get_RemoteParticipant, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::AccountId* get_RemoteParticipant();

  /// @brief Method get_Sender, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::AccountId* get_Sender();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>* i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___StringW_() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::ITextMessage"
  constexpr ::Unity::Services::Vivox::ITextMessage* i___Unity__Services__Vivox__ITextMessage() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IAccountArchiveMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAccountArchiveMessage(IAccountArchiveMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAccountArchiveMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAccountArchiveMessage(IAccountArchiveMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IAccountArchiveMessage);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IAccountArchiveMessage*, "Unity.Services.Vivox", "IAccountArchiveMessage");
