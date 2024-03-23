#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChatChannel)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Chat {
class ChatChannel;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Chat::ChatChannel);
// Type: Photon.Chat::ChatChannel
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Chat {
// Is value type: false
// CS Name: ::Photon.Chat::ChatChannel*
class CORDL_TYPE ChatChannel : public ::System::Object {
public:
  // Declarations
  /// @brief Field ChannelID, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_ChannelID, put = __cordl_internal_set_ChannelID)) int32_t ChannelID;

  __declspec(property(get = get_IsPrivate, put = set_IsPrivate)) bool IsPrivate;

  __declspec(property(get = get_LastMsgId, put = set_LastMsgId)) int32_t LastMsgId;

  __declspec(property(get = get_MaxSubscribers, put = set_MaxSubscribers)) int32_t MaxSubscribers;

  __declspec(property(get = get_MessageCount)) int32_t MessageCount;

  /// @brief Field MessageLimit, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_MessageLimit, put = __cordl_internal_set_MessageLimit)) int32_t MessageLimit;

  /// @brief Field Messages, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Messages, put = __cordl_internal_set_Messages))::System::Collections::Generic::List_1<::System::Object*>* Messages;

  /// @brief Field Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name))::StringW Name;

  __declspec(property(get = get_PublishSubscribers, put = set_PublishSubscribers)) bool PublishSubscribers;

  /// @brief Field Senders, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Senders, put = __cordl_internal_set_Senders))::System::Collections::Generic::List_1<::StringW>* Senders;

  /// @brief Field Subscribers, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Subscribers, put = __cordl_internal_set_Subscribers))::System::Collections::Generic::HashSet_1<::StringW>* Subscribers;

  /// @brief Field <IsPrivate>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__IsPrivate_k__BackingField, put = __cordl_internal_set__IsPrivate_k__BackingField)) bool _IsPrivate_k__BackingField;

  /// @brief Field <LastMsgId>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__LastMsgId_k__BackingField, put = __cordl_internal_set__LastMsgId_k__BackingField)) int32_t _LastMsgId_k__BackingField;

  /// @brief Field <MaxSubscribers>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxSubscribers_k__BackingField, put = __cordl_internal_set__MaxSubscribers_k__BackingField)) int32_t _MaxSubscribers_k__BackingField;

  /// @brief Field <PublishSubscribers>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__PublishSubscribers_k__BackingField, put = __cordl_internal_set__PublishSubscribers_k__BackingField)) bool _PublishSubscribers_k__BackingField;

  /// @brief Field properties, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_properties, put = __cordl_internal_set_properties))::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* properties;

  /// @brief Field usersProperties, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_usersProperties, put = __cordl_internal_set_usersProperties))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>* usersProperties;

  /// @brief Method Add, addr 0x180a504, size 0x12c, virtual false, abstract: false, final false
  inline void Add(::StringW sender, ::System::Object* message, int32_t msgId);

  /// @brief Method Add, addr 0x180a6ec, size 0x9c, virtual false, abstract: false, final false
  inline void Add(::ArrayW<::StringW, ::Array<::StringW>*> senders, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> messages, int32_t lastMsgId);

  /// @brief Method AddSubscriber, addr 0x180adbc, size 0x58, virtual false, abstract: false, final false
  inline bool AddSubscriber(::StringW userId);

  /// @brief Method AddSubscribers, addr 0x180acfc, size 0xc0, virtual false, abstract: false, final false
  inline bool AddSubscribers(::ArrayW<::StringW, ::Array<::StringW>*> users);

  /// @brief Method ClearMessages, addr 0x180a788, size 0xa8, virtual false, abstract: false, final false
  inline void ClearMessages();

  static inline ::Photon::Chat::ChatChannel* New_ctor(::StringW name);

  /// @brief Method ReadChannelProperties, addr 0x180a96c, size 0x390, virtual false, abstract: false, final false
  inline void ReadChannelProperties(::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* newProperties);

  /// @brief Method RemoveSubscriber, addr 0x180ae14, size 0x80, virtual false, abstract: false, final false
  inline bool RemoveSubscriber(::StringW userId);

  /// @brief Method ToStringMessages, addr 0x180a830, size 0x13c, virtual false, abstract: false, final false
  inline ::StringW ToStringMessages();

  /// @brief Method TruncateMessages, addr 0x180a630, size 0xbc, virtual false, abstract: false, final false
  inline void TruncateMessages();

  constexpr int32_t const& __cordl_internal_get_ChannelID() const;

  constexpr int32_t& __cordl_internal_get_ChannelID();

  constexpr int32_t const& __cordl_internal_get_MessageLimit() const;

  constexpr int32_t& __cordl_internal_get_MessageLimit();

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_Messages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __cordl_internal_get_Messages() const;

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Senders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_Senders() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_Subscribers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get_Subscribers() const;

  constexpr bool const& __cordl_internal_get__IsPrivate_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsPrivate_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__LastMsgId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LastMsgId_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__MaxSubscribers_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__MaxSubscribers_k__BackingField();

  constexpr bool const& __cordl_internal_get__PublishSubscribers_k__BackingField() const;

  constexpr bool& __cordl_internal_get__PublishSubscribers_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*& __cordl_internal_get_properties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*> const& __cordl_internal_get_properties() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>*& __cordl_internal_get_usersProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>*> const&
  __cordl_internal_get_usersProperties() const;

  constexpr void __cordl_internal_set_ChannelID(int32_t value);

  constexpr void __cordl_internal_set_MessageLimit(int32_t value);

  constexpr void __cordl_internal_set_Messages(::System::Collections::Generic::List_1<::System::Object*>* value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr void __cordl_internal_set_Senders(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_Subscribers(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__IsPrivate_k__BackingField(bool value);

  constexpr void __cordl_internal_set__LastMsgId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__MaxSubscribers_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__PublishSubscribers_k__BackingField(bool value);

  constexpr void __cordl_internal_set_properties(::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* value);

  constexpr void
  __cordl_internal_set_usersProperties(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>* value);

  /// @brief Method .ctor, addr 0x180a3ec, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_IsPrivate, addr 0x180a35c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsPrivate();

  /// @brief Method get_LastMsgId, addr 0x180a3b8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LastMsgId();

  /// @brief Method get_MaxSubscribers, addr 0x180a3dc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxSubscribers();

  /// @brief Method get_MessageCount, addr 0x180a370, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_MessageCount();

  /// @brief Method get_PublishSubscribers, addr 0x180a3c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_PublishSubscribers();

  /// @brief Method set_IsPrivate, addr 0x180a364, size 0xc, virtual false, abstract: false, final false
  inline void set_IsPrivate(bool value);

  /// @brief Method set_LastMsgId, addr 0x180a3c0, size 0x8, virtual false, abstract: false, final false
  inline void set_LastMsgId(int32_t value);

  /// @brief Method set_MaxSubscribers, addr 0x180a3e4, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxSubscribers(int32_t value);

  /// @brief Method set_PublishSubscribers, addr 0x180a3d0, size 0xc, virtual false, abstract: false, final false
  inline void set_PublishSubscribers(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChatChannel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChatChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChatChannel(ChatChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChatChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChatChannel(ChatChannel const&) = delete;

  /// @brief Field Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field Senders, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___Senders;

  /// @brief Field Messages, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ___Messages;

  /// @brief Field MessageLimit, offset: 0x28, size: 0x4, def value: None
  int32_t ___MessageLimit;

  /// @brief Field ChannelID, offset: 0x2c, size: 0x4, def value: None
  int32_t ___ChannelID;

  /// @brief Field <IsPrivate>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____IsPrivate_k__BackingField;

  /// @brief Field <LastMsgId>k__BackingField, offset: 0x34, size: 0x4, def value: None
  int32_t ____LastMsgId_k__BackingField;

  /// @brief Field properties, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* ___properties;

  /// @brief Field <PublishSubscribers>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____PublishSubscribers_k__BackingField;

  /// @brief Field <MaxSubscribers>k__BackingField, offset: 0x44, size: 0x4, def value: None
  int32_t ____MaxSubscribers_k__BackingField;

  /// @brief Field Subscribers, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ___Subscribers;

  /// @brief Field usersProperties, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>* ___usersProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Chat::ChatChannel, 0x58>, "Size mismatch!");

static_assert(offsetof(::Photon::Chat::ChatChannel, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatChannel, ___Senders) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatChannel, ___Messages) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatChannel, ___MessageLimit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatChannel, ___ChannelID) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatChannel, ____IsPrivate_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatChannel, ____LastMsgId_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatChannel, ___properties) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatChannel, ____PublishSubscribers_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatChannel, ____MaxSubscribers_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatChannel, ___Subscribers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatChannel, ___usersProperties) == 0x50, "Offset mismatch!");

} // namespace Photon::Chat
NEED_NO_BOX(::Photon::Chat::ChatChannel);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ChatChannel*, "Photon.Chat", "ChatChannel");
