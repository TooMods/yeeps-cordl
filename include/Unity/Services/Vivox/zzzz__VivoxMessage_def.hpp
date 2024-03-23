#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VivoxMessage)
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Unity::Services::Vivox {
class IAccountArchiveMessage;
}
namespace Unity::Services::Vivox {
class IChannelTextMessage;
}
namespace Unity::Services::Vivox {
class IDirectedTextMessage;
}
namespace Unity::Services::Vivox {
class ISessionArchiveMessage;
}
namespace Unity::Services::Vivox {
struct __VivoxMessage___SetMessageAsReadAsync_d__42;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class VivoxMessage;
}
namespace Unity::Services::Vivox {
struct __VivoxMessage___SetMessageAsReadAsync_d__42;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::VivoxMessage);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxMessage___SetMessageAsReadAsync_d__42);
// Type: ::<SetMessageAsReadAsync>d__42
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxMessage::<SetMessageAsReadAsync>d__42
struct CORDL_TYPE __VivoxMessage___SetMessageAsReadAsync_d__42 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c14bf0, size 0x240, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c14e30, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxMessage___SetMessageAsReadAsync_d__42();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxMessage*", modifiers: "",
  // def_value: None }, CppParam { name: "seenAt", ty: "::System::Nullable_1<::System::DateTime>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VivoxMessage___SetMessageAsReadAsync_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                         ::Unity::Services::Vivox::VivoxMessage* __4__this, ::System::Nullable_1<::System::DateTime> seenAt,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxMessage* __4__this;

  /// @brief Field seenAt, offset: 0x28, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> seenAt;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxMessage___SetMessageAsReadAsync_d__42, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxMessage___SetMessageAsReadAsync_d__42, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxMessage___SetMessageAsReadAsync_d__42, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxMessage___SetMessageAsReadAsync_d__42, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxMessage___SetMessageAsReadAsync_d__42, seenAt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxMessage___SetMessageAsReadAsync_d__42, __u__1) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: Unity.Services.Vivox::VivoxMessage
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::VivoxMessage*
class CORDL_TYPE VivoxMessage : public ::System::Object {
public:
  // Declarations
  using _SetMessageAsReadAsync_d__42 = ::Unity::Services::Vivox::__VivoxMessage___SetMessageAsReadAsync_d__42;

  __declspec(property(get = get_ChannelName, put = set_ChannelName))::StringW ChannelName;

  /// @brief Field ChannelURI, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ChannelURI, put = __cordl_internal_set_ChannelURI))::StringW ChannelURI;

  __declspec(property(get = get_FromSelf, put = set_FromSelf)) bool FromSelf;

  __declspec(property(get = get_IsRead, put = set_IsRead)) bool IsRead;

  __declspec(property(get = get_Language, put = set_Language))::StringW Language;

  __declspec(property(get = get_MessageId, put = set_MessageId))::StringW MessageId;

  __declspec(property(get = get_MessageText, put = set_MessageText))::StringW MessageText;

  __declspec(property(get = get_ReceivedTime, put = set_ReceivedTime))::System::DateTime ReceivedTime;

  __declspec(property(get = get_SenderDisplayName, put = set_SenderDisplayName))::StringW SenderDisplayName;

  __declspec(property(get = get_SenderPlayerId, put = set_SenderPlayerId))::StringW SenderPlayerId;

  /// @brief Field SenderURI, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_SenderURI, put = __cordl_internal_set_SenderURI))::StringW SenderURI;

  /// @brief Field <ChannelName>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ChannelName_k__BackingField, put = __cordl_internal_set__ChannelName_k__BackingField))::StringW _ChannelName_k__BackingField;

  /// @brief Field <FromSelf>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__FromSelf_k__BackingField, put = __cordl_internal_set__FromSelf_k__BackingField)) bool _FromSelf_k__BackingField;

  /// @brief Field <IsRead>k__BackingField, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__IsRead_k__BackingField, put = __cordl_internal_set__IsRead_k__BackingField)) bool _IsRead_k__BackingField;

  /// @brief Field <Language>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__Language_k__BackingField, put = __cordl_internal_set__Language_k__BackingField))::StringW _Language_k__BackingField;

  /// @brief Field <MessageId>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__MessageId_k__BackingField, put = __cordl_internal_set__MessageId_k__BackingField))::StringW _MessageId_k__BackingField;

  /// @brief Field <MessageText>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__MessageText_k__BackingField, put = __cordl_internal_set__MessageText_k__BackingField))::StringW _MessageText_k__BackingField;

  /// @brief Field <ReceivedTime>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__ReceivedTime_k__BackingField, put = __cordl_internal_set__ReceivedTime_k__BackingField))::System::DateTime _ReceivedTime_k__BackingField;

  /// @brief Field <SenderDisplayName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__SenderDisplayName_k__BackingField, put = __cordl_internal_set__SenderDisplayName_k__BackingField))::StringW _SenderDisplayName_k__BackingField;

  /// @brief Field <SenderPlayerId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__SenderPlayerId_k__BackingField, put = __cordl_internal_set__SenderPlayerId_k__BackingField))::StringW _SenderPlayerId_k__BackingField;

  static inline ::Unity::Services::Vivox::VivoxMessage* New_ctor(::Unity::Services::Vivox::IAccountArchiveMessage* message);

  static inline ::Unity::Services::Vivox::VivoxMessage* New_ctor(::Unity::Services::Vivox::IChannelTextMessage* message);

  static inline ::Unity::Services::Vivox::VivoxMessage* New_ctor(::Unity::Services::Vivox::IDirectedTextMessage* message);

  static inline ::Unity::Services::Vivox::VivoxMessage* New_ctor(::Unity::Services::Vivox::ISessionArchiveMessage* message);

  /// @brief Method SetMessageAsReadAsync, addr 0x1c14b14, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SetMessageAsReadAsync(::System::Nullable_1<::System::DateTime> seenAt);

  constexpr ::StringW const& __cordl_internal_get_ChannelURI() const;

  constexpr ::StringW& __cordl_internal_get_ChannelURI();

  constexpr ::StringW const& __cordl_internal_get_SenderURI() const;

  constexpr ::StringW& __cordl_internal_get_SenderURI();

  constexpr ::StringW const& __cordl_internal_get__ChannelName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ChannelName_k__BackingField();

  constexpr bool const& __cordl_internal_get__FromSelf_k__BackingField() const;

  constexpr bool& __cordl_internal_get__FromSelf_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsRead_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsRead_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Language_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Language_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__MessageId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__MessageId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__MessageText_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__MessageText_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__ReceivedTime_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__ReceivedTime_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SenderDisplayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SenderDisplayName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SenderPlayerId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SenderPlayerId_k__BackingField();

  constexpr void __cordl_internal_set_ChannelURI(::StringW value);

  constexpr void __cordl_internal_set_SenderURI(::StringW value);

  constexpr void __cordl_internal_set__ChannelName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__FromSelf_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsRead_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Language_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__MessageId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__MessageText_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ReceivedTime_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__SenderDisplayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SenderPlayerId_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1c146b0, size 0x3cc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::IAccountArchiveMessage* message);

  /// @brief Method .ctor, addr 0x1c137e0, size 0x56c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::IChannelTextMessage* message);

  /// @brief Method .ctor, addr 0x1c13d7c, size 0x3c8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::IDirectedTextMessage* message);

  /// @brief Method .ctor, addr 0x1c14144, size 0x56c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::ISessionArchiveMessage* message);

  /// @brief Method get_ChannelName, addr 0x1c14a9c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ChannelName();

  /// @brief Method get_FromSelf, addr 0x1c14abc, size 0x8, virtual false, abstract: false, final false
  inline bool get_FromSelf();

  /// @brief Method get_IsRead, addr 0x1c14b00, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsRead();

  /// @brief Method get_Language, addr 0x1c14ae0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Language();

  /// @brief Method get_MessageId, addr 0x1c14af0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MessageId();

  /// @brief Method get_MessageText, addr 0x1c14aac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MessageText();

  /// @brief Method get_ReceivedTime, addr 0x1c14ad0, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_ReceivedTime();

  /// @brief Method get_SenderDisplayName, addr 0x1c14a8c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SenderDisplayName();

  /// @brief Method get_SenderPlayerId, addr 0x1c14a7c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SenderPlayerId();

  /// @brief Method set_ChannelName, addr 0x1c14aa4, size 0x8, virtual false, abstract: false, final false
  inline void set_ChannelName(::StringW value);

  /// @brief Method set_FromSelf, addr 0x1c14ac4, size 0xc, virtual false, abstract: false, final false
  inline void set_FromSelf(bool value);

  /// @brief Method set_IsRead, addr 0x1c14b08, size 0xc, virtual false, abstract: false, final false
  inline void set_IsRead(bool value);

  /// @brief Method set_Language, addr 0x1c14ae8, size 0x8, virtual false, abstract: false, final false
  inline void set_Language(::StringW value);

  /// @brief Method set_MessageId, addr 0x1c14af8, size 0x8, virtual false, abstract: false, final false
  inline void set_MessageId(::StringW value);

  /// @brief Method set_MessageText, addr 0x1c14ab4, size 0x8, virtual false, abstract: false, final false
  inline void set_MessageText(::StringW value);

  /// @brief Method set_ReceivedTime, addr 0x1c14ad8, size 0x8, virtual false, abstract: false, final false
  inline void set_ReceivedTime(::System::DateTime value);

  /// @brief Method set_SenderDisplayName, addr 0x1c14a94, size 0x8, virtual false, abstract: false, final false
  inline void set_SenderDisplayName(::StringW value);

  /// @brief Method set_SenderPlayerId, addr 0x1c14a84, size 0x8, virtual false, abstract: false, final false
  inline void set_SenderPlayerId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxMessage(VivoxMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxMessage(VivoxMessage const&) = delete;

  /// @brief Field SenderURI, offset: 0x10, size: 0x8, def value: None
  ::StringW ___SenderURI;

  /// @brief Field ChannelURI, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ChannelURI;

  /// @brief Field <SenderPlayerId>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____SenderPlayerId_k__BackingField;

  /// @brief Field <SenderDisplayName>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____SenderDisplayName_k__BackingField;

  /// @brief Field <ChannelName>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____ChannelName_k__BackingField;

  /// @brief Field <MessageText>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____MessageText_k__BackingField;

  /// @brief Field <FromSelf>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____FromSelf_k__BackingField;

  /// @brief Field <ReceivedTime>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::DateTime ____ReceivedTime_k__BackingField;

  /// @brief Field <Language>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____Language_k__BackingField;

  /// @brief Field <MessageId>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::StringW ____MessageId_k__BackingField;

  /// @brief Field <IsRead>k__BackingField, offset: 0x60, size: 0x1, def value: None
  bool ____IsRead_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VivoxMessage, 0x68>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxMessage, ___SenderURI) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxMessage, ___ChannelURI) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxMessage, ____SenderPlayerId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxMessage, ____SenderDisplayName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxMessage, ____ChannelName_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxMessage, ____MessageText_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxMessage, ____FromSelf_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxMessage, ____ReceivedTime_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxMessage, ____Language_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxMessage, ____MessageId_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxMessage, ____IsRead_k__BackingField) == 0x60, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::VivoxMessage);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VivoxMessage*, "Unity.Services.Vivox", "VivoxMessage");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxMessage___SetMessageAsReadAsync_d__42, "Unity.Services.Vivox", "VivoxMessage/<SetMessageAsReadAsync>d__42");
