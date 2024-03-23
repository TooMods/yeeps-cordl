#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ChatHistoryQueryResult)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace Unity::Services::Vivox {
class AccountId;
}
namespace Unity::Services::Vivox {
class IChatHistoryQueryResult;
}
namespace Unity::Services::Vivox {
class VivoxMessage;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class ChatHistoryQueryResult;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::ChatHistoryQueryResult);
// Type: Unity.Services.Vivox::ChatHistoryQueryResult
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ChatHistoryQueryResult*
class CORDL_TYPE ChatHistoryQueryResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Participant, put = set_Participant))::Unity::Services::Vivox::AccountId* Participant;

  __declspec(property(get = get_RequestId, put = set_RequestId))::StringW RequestId;

  __declspec(property(get = get_VivoxMessages, put = set_VivoxMessages))::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>* VivoxMessages;

  /// @brief Field <Participant>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Participant_k__BackingField,
                      put = __cordl_internal_set__Participant_k__BackingField))::Unity::Services::Vivox::AccountId* _Participant_k__BackingField;

  /// @brief Field <RequestId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__RequestId_k__BackingField, put = __cordl_internal_set__RequestId_k__BackingField))::StringW _RequestId_k__BackingField;

  /// @brief Field <VivoxMessages>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__VivoxMessages_k__BackingField,
                      put = __cordl_internal_set__VivoxMessages_k__BackingField))::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>* _VivoxMessages_k__BackingField;

  /// @brief Convert operator to "::Unity::Services::Vivox::IChatHistoryQueryResult"
  constexpr operator ::Unity::Services::Vivox::IChatHistoryQueryResult*() noexcept;

  static inline ::Unity::Services::Vivox::ChatHistoryQueryResult* New_ctor();

  static inline ::Unity::Services::Vivox::ChatHistoryQueryResult* New_ctor(::StringW requestId);

  constexpr ::Unity::Services::Vivox::AccountId*& __cordl_internal_get__Participant_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::AccountId*> const& __cordl_internal_get__Participant_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__RequestId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RequestId_k__BackingField();

  constexpr ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*& __cordl_internal_get__VivoxMessages_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*> const& __cordl_internal_get__VivoxMessages_k__BackingField() const;

  constexpr void __cordl_internal_set__Participant_k__BackingField(::Unity::Services::Vivox::AccountId* value);

  constexpr void __cordl_internal_set__RequestId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__VivoxMessages_k__BackingField(::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method .ctor, addr 0x2fd9954, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2fd1778, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::StringW requestId);

  /// @brief Method get_Participant, addr 0x2fda42c, size 0x8, virtual true, abstract: false, final true
  inline ::Unity::Services::Vivox::AccountId* get_Participant();

  /// @brief Method get_RequestId, addr 0x2fda41c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_RequestId();

  /// @brief Method get_VivoxMessages, addr 0x2fda43c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>* get_VivoxMessages();

  /// @brief Convert to "::Unity::Services::Vivox::IChatHistoryQueryResult"
  constexpr ::Unity::Services::Vivox::IChatHistoryQueryResult* i___Unity__Services__Vivox__IChatHistoryQueryResult() noexcept;

  /// @brief Method set_Participant, addr 0x2fda434, size 0x8, virtual false, abstract: false, final false
  inline void set_Participant(::Unity::Services::Vivox::AccountId* value);

  /// @brief Method set_RequestId, addr 0x2fda424, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestId(::StringW value);

  /// @brief Method set_VivoxMessages, addr 0x2fda444, size 0x8, virtual false, abstract: false, final false
  inline void set_VivoxMessages(::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChatHistoryQueryResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChatHistoryQueryResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChatHistoryQueryResult(ChatHistoryQueryResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChatHistoryQueryResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChatHistoryQueryResult(ChatHistoryQueryResult const&) = delete;

  /// @brief Field <RequestId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____RequestId_k__BackingField;

  /// @brief Field <Participant>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::AccountId* ____Participant_k__BackingField;

  /// @brief Field <VivoxMessages>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>* ____VivoxMessages_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::ChatHistoryQueryResult, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChatHistoryQueryResult, ____RequestId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChatHistoryQueryResult, ____Participant_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChatHistoryQueryResult, ____VivoxMessages_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::ChatHistoryQueryResult);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ChatHistoryQueryResult*, "Unity.Services.Vivox", "ChatHistoryQueryResult");
