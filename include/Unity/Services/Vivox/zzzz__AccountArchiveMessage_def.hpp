#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AccountArchiveMessage)
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System {
struct DateTime;
}
namespace System {
class Exception;
}
namespace Unity::Services::Vivox {
class AccountId;
}
namespace Unity::Services::Vivox {
class IAccountArchiveMessage;
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
class AccountArchiveMessage;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::AccountArchiveMessage);
// Type: Unity.Services.Vivox::AccountArchiveMessage
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::AccountArchiveMessage*
class CORDL_TYPE AccountArchiveMessage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Exception, put = set_Exception))::System::Exception* Exception;

  __declspec(property(get = get_Inbound, put = set_Inbound)) bool Inbound;

  __declspec(property(get = get_Key, put = set_Key))::StringW Key;

  __declspec(property(get = get_Language, put = set_Language))::StringW Language;

  __declspec(property(get = get_LoginSession, put = set_LoginSession))::Unity::Services::Vivox::ILoginSession* LoginSession;

  __declspec(property(get = get_Message, put = set_Message))::StringW Message;

  __declspec(property(get = get_MessageId, put = set_MessageId))::StringW MessageId;

  /// @brief Field PropertyChanged, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanged, put = __cordl_internal_set_PropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  __declspec(property(get = get_QueryId, put = set_QueryId))::StringW QueryId;

  __declspec(property(get = get_ReceivedTime, put = set_ReceivedTime))::System::DateTime ReceivedTime;

  __declspec(property(get = get_RemoteParticipant, put = set_RemoteParticipant))::Unity::Services::Vivox::AccountId* RemoteParticipant;

  __declspec(property(get = get_Sender, put = set_Sender))::Unity::Services::Vivox::AccountId* Sender;

  /// @brief Field <Inbound>k__BackingField, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__Inbound_k__BackingField, put = __cordl_internal_set__Inbound_k__BackingField)) bool _Inbound_k__BackingField;

  /// @brief Field <Key>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField))::StringW _Key_k__BackingField;

  /// @brief Field <Language>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Language_k__BackingField, put = __cordl_internal_set__Language_k__BackingField))::StringW _Language_k__BackingField;

  /// @brief Field <LoginSession>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__LoginSession_k__BackingField,
                      put = __cordl_internal_set__LoginSession_k__BackingField))::Unity::Services::Vivox::ILoginSession* _LoginSession_k__BackingField;

  /// @brief Field <MessageId>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__MessageId_k__BackingField, put = __cordl_internal_set__MessageId_k__BackingField))::StringW _MessageId_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Message_k__BackingField, put = __cordl_internal_set__Message_k__BackingField))::StringW _Message_k__BackingField;

  /// @brief Field <QueryId>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__QueryId_k__BackingField, put = __cordl_internal_set__QueryId_k__BackingField))::StringW _QueryId_k__BackingField;

  /// @brief Field <ReceivedTime>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ReceivedTime_k__BackingField, put = __cordl_internal_set__ReceivedTime_k__BackingField))::System::DateTime _ReceivedTime_k__BackingField;

  /// @brief Field <RemoteParticipant>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__RemoteParticipant_k__BackingField,
                      put = __cordl_internal_set__RemoteParticipant_k__BackingField))::Unity::Services::Vivox::AccountId* _RemoteParticipant_k__BackingField;

  /// @brief Field <Sender>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__Sender_k__BackingField, put = __cordl_internal_set__Sender_k__BackingField))::Unity::Services::Vivox::AccountId* _Sender_k__BackingField;

  /// @brief Field _exception, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__exception, put = __cordl_internal_set__exception))::System::Exception* _exception;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IAccountArchiveMessage"
  constexpr operator ::Unity::Services::Vivox::IAccountArchiveMessage*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::ITextMessage"
  constexpr operator ::Unity::Services::Vivox::ITextMessage*() noexcept;

  static inline ::Unity::Services::Vivox::AccountArchiveMessage* New_ctor();

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanged() const;

  constexpr bool const& __cordl_internal_get__Inbound_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Inbound_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Key_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Language_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Language_k__BackingField();

  constexpr ::Unity::Services::Vivox::ILoginSession*& __cordl_internal_get__LoginSession_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::ILoginSession*> const& __cordl_internal_get__LoginSession_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__MessageId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__MessageId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Message_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__QueryId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__QueryId_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__ReceivedTime_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__ReceivedTime_k__BackingField();

  constexpr ::Unity::Services::Vivox::AccountId*& __cordl_internal_get__RemoteParticipant_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& __cordl_internal_get__RemoteParticipant_k__BackingField() const;

  constexpr ::Unity::Services::Vivox::AccountId*& __cordl_internal_get__Sender_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& __cordl_internal_get__Sender_k__BackingField() const;

  constexpr ::System::Exception*& __cordl_internal_get__exception();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get__exception() const;

  constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__Inbound_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Language_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__LoginSession_k__BackingField(::Unity::Services::Vivox::ILoginSession* value);

  constexpr void __cordl_internal_set__MessageId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Message_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__QueryId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ReceivedTime_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__RemoteParticipant_k__BackingField(::Unity::Services::Vivox::AccountId* value);

  constexpr void __cordl_internal_set__Sender_k__BackingField(::Unity::Services::Vivox::AccountId* value);

  constexpr void __cordl_internal_set__exception(::System::Exception* value);

  /// @brief Method .ctor, addr 0x2caceb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_PropertyChanged, addr 0x2cacc24, size 0x9c, virtual true, abstract: false, final true
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method get_Exception, addr 0x2cacd5c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Exception* get_Exception();

  /// @brief Method get_Inbound, addr 0x2cace94, size 0x8, virtual true, abstract: false, final true
  inline bool get_Inbound();

  /// @brief Method get_Key, addr 0x2cace14, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Key();

  /// @brief Method get_Language, addr 0x2cace44, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Language();

  /// @brief Method get_LoginSession, addr 0x2cace54, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::ILoginSession* get_LoginSession();

  /// @brief Method get_Message, addr 0x2cace34, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Message();

  /// @brief Method get_MessageId, addr 0x2cacea8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_MessageId();

  /// @brief Method get_QueryId, addr 0x2cace64, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_QueryId();

  /// @brief Method get_ReceivedTime, addr 0x2cace24, size 0x8, virtual true, abstract: false, final true
  inline ::System::DateTime get_ReceivedTime();

  /// @brief Method get_RemoteParticipant, addr 0x2cace84, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::AccountId* get_RemoteParticipant();

  /// @brief Method get_Sender, addr 0x2cace74, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::AccountId* get_Sender();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IAccountArchiveMessage"
  constexpr ::Unity::Services::Vivox::IAccountArchiveMessage* i___Unity__Services__Vivox__IAccountArchiveMessage() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>* i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___StringW_() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::ITextMessage"
  constexpr ::Unity::Services::Vivox::ITextMessage* i___Unity__Services__Vivox__ITextMessage() noexcept;

  /// @brief Method remove_PropertyChanged, addr 0x2caccc0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method set_Exception, addr 0x2cacd64, size 0xb0, virtual false, abstract: false, final false
  inline void set_Exception(::System::Exception* value);

  /// @brief Method set_Inbound, addr 0x2cace9c, size 0xc, virtual false, abstract: false, final false
  inline void set_Inbound(bool value);

  /// @brief Method set_Key, addr 0x2cace1c, size 0x8, virtual false, abstract: false, final false
  inline void set_Key(::StringW value);

  /// @brief Method set_Language, addr 0x2cace4c, size 0x8, virtual false, abstract: false, final false
  inline void set_Language(::StringW value);

  /// @brief Method set_LoginSession, addr 0x2cace5c, size 0x8, virtual false, abstract: false, final false
  inline void set_LoginSession(::Unity::Services::Vivox::ILoginSession* value);

  /// @brief Method set_Message, addr 0x2cace3c, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::StringW value);

  /// @brief Method set_MessageId, addr 0x2caceb0, size 0x8, virtual false, abstract: false, final false
  inline void set_MessageId(::StringW value);

  /// @brief Method set_QueryId, addr 0x2cace6c, size 0x8, virtual false, abstract: false, final false
  inline void set_QueryId(::StringW value);

  /// @brief Method set_ReceivedTime, addr 0x2cace2c, size 0x8, virtual false, abstract: false, final false
  inline void set_ReceivedTime(::System::DateTime value);

  /// @brief Method set_RemoteParticipant, addr 0x2cace8c, size 0x8, virtual false, abstract: false, final false
  inline void set_RemoteParticipant(::Unity::Services::Vivox::AccountId* value);

  /// @brief Method set_Sender, addr 0x2cace7c, size 0x8, virtual false, abstract: false, final false
  inline void set_Sender(::Unity::Services::Vivox::AccountId* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccountArchiveMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccountArchiveMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccountArchiveMessage(AccountArchiveMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccountArchiveMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccountArchiveMessage(AccountArchiveMessage const&) = delete;

  /// @brief Field _exception, offset: 0x10, size: 0x8, def value: None
  ::System::Exception* ____exception;

  /// @brief Field PropertyChanged, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanged;

  /// @brief Field <Key>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Key_k__BackingField;

  /// @brief Field <ReceivedTime>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::DateTime ____ReceivedTime_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____Message_k__BackingField;

  /// @brief Field <Language>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____Language_k__BackingField;

  /// @brief Field <LoginSession>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Vivox::ILoginSession* ____LoginSession_k__BackingField;

  /// @brief Field <QueryId>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____QueryId_k__BackingField;

  /// @brief Field <Sender>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* ____Sender_k__BackingField;

  /// @brief Field <RemoteParticipant>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* ____RemoteParticipant_k__BackingField;

  /// @brief Field <Inbound>k__BackingField, offset: 0x60, size: 0x1, def value: None
  bool ____Inbound_k__BackingField;

  /// @brief Field <MessageId>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::StringW ____MessageId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::AccountArchiveMessage, 0x70>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountArchiveMessage, ____exception) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountArchiveMessage, ___PropertyChanged) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountArchiveMessage, ____Key_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountArchiveMessage, ____ReceivedTime_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountArchiveMessage, ____Message_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountArchiveMessage, ____Language_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountArchiveMessage, ____LoginSession_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountArchiveMessage, ____QueryId_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountArchiveMessage, ____Sender_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountArchiveMessage, ____RemoteParticipant_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountArchiveMessage, ____Inbound_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::AccountArchiveMessage, ____MessageId_k__BackingField) == 0x68, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::AccountArchiveMessage);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::AccountArchiveMessage*, "Unity.Services.Vivox", "AccountArchiveMessage");
