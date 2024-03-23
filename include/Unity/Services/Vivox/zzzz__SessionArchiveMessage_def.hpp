#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SessionArchiveMessage)
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
class IChannelSession;
}
namespace Unity::Services::Vivox {
template <typename TK> class IKeyedItemNotifyPropertyChanged_1;
}
namespace Unity::Services::Vivox {
class ISessionArchiveMessage;
}
namespace Unity::Services::Vivox {
class ITextMessage;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class SessionArchiveMessage;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::SessionArchiveMessage);
// Type: Unity.Services.Vivox::SessionArchiveMessage
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::SessionArchiveMessage*
class CORDL_TYPE SessionArchiveMessage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ChannelSession, put = set_ChannelSession))::Unity::Services::Vivox::IChannelSession* ChannelSession;

  __declspec(property(get = get_Exception, put = set_Exception))::System::Exception* Exception;

  __declspec(property(get = get_FromSelf, put = set_FromSelf)) bool FromSelf;

  __declspec(property(get = get_Key, put = set_Key))::StringW Key;

  __declspec(property(get = get_Language, put = set_Language))::StringW Language;

  __declspec(property(get = get_Message, put = set_Message))::StringW Message;

  __declspec(property(get = get_MessageId, put = set_MessageId))::StringW MessageId;

  /// @brief Field PropertyChanged, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanged, put = __cordl_internal_set_PropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  __declspec(property(get = get_QueryId, put = set_QueryId))::StringW QueryId;

  __declspec(property(get = get_ReceivedTime, put = set_ReceivedTime))::System::DateTime ReceivedTime;

  __declspec(property(get = get_Sender, put = set_Sender))::Unity::Services::Vivox::AccountId* Sender;

  /// @brief Field <ChannelSession>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__ChannelSession_k__BackingField,
                      put = __cordl_internal_set__ChannelSession_k__BackingField))::Unity::Services::Vivox::IChannelSession* _ChannelSession_k__BackingField;

  /// @brief Field <FromSelf>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__FromSelf_k__BackingField, put = __cordl_internal_set__FromSelf_k__BackingField)) bool _FromSelf_k__BackingField;

  /// @brief Field <Key>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField))::StringW _Key_k__BackingField;

  /// @brief Field <Language>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Language_k__BackingField, put = __cordl_internal_set__Language_k__BackingField))::StringW _Language_k__BackingField;

  /// @brief Field <MessageId>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__MessageId_k__BackingField, put = __cordl_internal_set__MessageId_k__BackingField))::StringW _MessageId_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Message_k__BackingField, put = __cordl_internal_set__Message_k__BackingField))::StringW _Message_k__BackingField;

  /// @brief Field <QueryId>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__QueryId_k__BackingField, put = __cordl_internal_set__QueryId_k__BackingField))::StringW _QueryId_k__BackingField;

  /// @brief Field <ReceivedTime>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ReceivedTime_k__BackingField, put = __cordl_internal_set__ReceivedTime_k__BackingField))::System::DateTime _ReceivedTime_k__BackingField;

  /// @brief Field <Sender>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Sender_k__BackingField, put = __cordl_internal_set__Sender_k__BackingField))::Unity::Services::Vivox::AccountId* _Sender_k__BackingField;

  /// @brief Field _exception, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__exception, put = __cordl_internal_set__exception))::System::Exception* _exception;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::ISessionArchiveMessage"
  constexpr operator ::Unity::Services::Vivox::ISessionArchiveMessage*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::ITextMessage"
  constexpr operator ::Unity::Services::Vivox::ITextMessage*() noexcept;

  static inline ::Unity::Services::Vivox::SessionArchiveMessage* New_ctor();

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanged() const;

  constexpr ::Unity::Services::Vivox::IChannelSession*& __cordl_internal_get__ChannelSession_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::IChannelSession*> const& __cordl_internal_get__ChannelSession_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__FromSelf_k__BackingField() const;

  constexpr bool& __cordl_internal_get__FromSelf_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Key_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Language_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Language_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__MessageId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__MessageId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Message_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__QueryId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__QueryId_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__ReceivedTime_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__ReceivedTime_k__BackingField();

  constexpr ::Unity::Services::Vivox::AccountId*& __cordl_internal_get__Sender_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& __cordl_internal_get__Sender_k__BackingField() const;

  constexpr ::System::Exception*& __cordl_internal_get__exception();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get__exception() const;

  constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set__ChannelSession_k__BackingField(::Unity::Services::Vivox::IChannelSession* value);

  constexpr void __cordl_internal_set__FromSelf_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Language_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__MessageId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Message_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__QueryId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ReceivedTime_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__Sender_k__BackingField(::Unity::Services::Vivox::AccountId* value);

  constexpr void __cordl_internal_set__exception(::System::Exception* value);

  /// @brief Method .ctor, addr 0x2cacc1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_PropertyChanged, addr 0x2cac998, size 0x9c, virtual true, abstract: false, final true
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method get_ChannelSession, addr 0x2cacbc8, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::IChannelSession* get_ChannelSession();

  /// @brief Method get_Exception, addr 0x2cacad0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Exception* get_Exception();

  /// @brief Method get_FromSelf, addr 0x2cacbe8, size 0x8, virtual true, abstract: false, final true
  inline bool get_FromSelf();

  /// @brief Method get_Key, addr 0x2cacb88, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Key();

  /// @brief Method get_Language, addr 0x2cacbb8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Language();

  /// @brief Method get_Message, addr 0x2cacba8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Message();

  /// @brief Method get_MessageId, addr 0x2cacc0c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_MessageId();

  /// @brief Method get_QueryId, addr 0x2cacbfc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_QueryId();

  /// @brief Method get_ReceivedTime, addr 0x2cacb98, size 0x8, virtual true, abstract: false, final true
  inline ::System::DateTime get_ReceivedTime();

  /// @brief Method get_Sender, addr 0x2cacbd8, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::AccountId* get_Sender();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>* i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___StringW_() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::ISessionArchiveMessage"
  constexpr ::Unity::Services::Vivox::ISessionArchiveMessage* i___Unity__Services__Vivox__ISessionArchiveMessage() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::ITextMessage"
  constexpr ::Unity::Services::Vivox::ITextMessage* i___Unity__Services__Vivox__ITextMessage() noexcept;

  /// @brief Method remove_PropertyChanged, addr 0x2caca34, size 0x9c, virtual true, abstract: false, final true
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method set_ChannelSession, addr 0x2cacbd0, size 0x8, virtual false, abstract: false, final false
  inline void set_ChannelSession(::Unity::Services::Vivox::IChannelSession* value);

  /// @brief Method set_Exception, addr 0x2cacad8, size 0xb0, virtual false, abstract: false, final false
  inline void set_Exception(::System::Exception* value);

  /// @brief Method set_FromSelf, addr 0x2cacbf0, size 0xc, virtual false, abstract: false, final false
  inline void set_FromSelf(bool value);

  /// @brief Method set_Key, addr 0x2cacb90, size 0x8, virtual false, abstract: false, final false
  inline void set_Key(::StringW value);

  /// @brief Method set_Language, addr 0x2cacbc0, size 0x8, virtual false, abstract: false, final false
  inline void set_Language(::StringW value);

  /// @brief Method set_Message, addr 0x2cacbb0, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::StringW value);

  /// @brief Method set_MessageId, addr 0x2cacc14, size 0x8, virtual false, abstract: false, final false
  inline void set_MessageId(::StringW value);

  /// @brief Method set_QueryId, addr 0x2cacc04, size 0x8, virtual false, abstract: false, final false
  inline void set_QueryId(::StringW value);

  /// @brief Method set_ReceivedTime, addr 0x2cacba0, size 0x8, virtual false, abstract: false, final false
  inline void set_ReceivedTime(::System::DateTime value);

  /// @brief Method set_Sender, addr 0x2cacbe0, size 0x8, virtual false, abstract: false, final false
  inline void set_Sender(::Unity::Services::Vivox::AccountId* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SessionArchiveMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SessionArchiveMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SessionArchiveMessage(SessionArchiveMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SessionArchiveMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SessionArchiveMessage(SessionArchiveMessage const&) = delete;

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

  /// @brief Field <ChannelSession>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Vivox::IChannelSession* ____ChannelSession_k__BackingField;

  /// @brief Field <Sender>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* ____Sender_k__BackingField;

  /// @brief Field <FromSelf>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____FromSelf_k__BackingField;

  /// @brief Field <QueryId>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::StringW ____QueryId_k__BackingField;

  /// @brief Field <MessageId>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::StringW ____MessageId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::SessionArchiveMessage, 0x68>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::SessionArchiveMessage, ____exception) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::SessionArchiveMessage, ___PropertyChanged) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::SessionArchiveMessage, ____Key_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::SessionArchiveMessage, ____ReceivedTime_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::SessionArchiveMessage, ____Message_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::SessionArchiveMessage, ____Language_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::SessionArchiveMessage, ____ChannelSession_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::SessionArchiveMessage, ____Sender_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::SessionArchiveMessage, ____FromSelf_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::SessionArchiveMessage, ____QueryId_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::SessionArchiveMessage, ____MessageId_k__BackingField) == 0x60, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::SessionArchiveMessage);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::SessionArchiveMessage*, "Unity.Services.Vivox", "SessionArchiveMessage");
