#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VoteType_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VoteData)
namespace GlobalNamespace {
class ImaginationPrompt;
}
namespace GlobalNamespace {
struct VoteType;
}
namespace GlobalNamespace {
class __VoteManager__OnVoteComplete;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class VoteData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VoteData);
// Type: ::VoteData
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VoteData*
class CORDL_TYPE VoteData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isMaster>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__isMaster_k__BackingField, put = __cordl_internal_set__isMaster_k__BackingField)) bool _isMaster_k__BackingField;

  /// @brief Field <voteCallerUserID>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__voteCallerUserID_k__BackingField, put = __cordl_internal_set__voteCallerUserID_k__BackingField))::StringW _voteCallerUserID_k__BackingField;

  /// @brief Field <voteID>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__voteID_k__BackingField, put = __cordl_internal_set__voteID_k__BackingField))::StringW _voteID_k__BackingField;

  /// @brief Field <voteTargetUserID>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__voteTargetUserID_k__BackingField, put = __cordl_internal_set__voteTargetUserID_k__BackingField))::StringW _voteTargetUserID_k__BackingField;

  /// @brief Field <voteType>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__voteType_k__BackingField, put = __cordl_internal_set__voteType_k__BackingField))::GlobalNamespace::VoteType _voteType_k__BackingField;

  /// @brief Field approvedPrompt, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_approvedPrompt, put = __cordl_internal_set_approvedPrompt))::GlobalNamespace::ImaginationPrompt* approvedPrompt;

  /// @brief Field isLocalVote, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_isLocalVote, put = __cordl_internal_set_isLocalVote)) bool isLocalVote;

  __declspec(property(get = get_isMaster, put = set_isMaster)) bool isMaster;

  __declspec(property(get = get_noVoteCount)) int32_t noVoteCount;

  /// @brief Field noVotes, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_noVotes, put = __cordl_internal_set_noVotes))::System::Collections::Generic::List_1<::StringW>* noVotes;

  /// @brief Field onVoteComplete, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_onVoteComplete, put = __cordl_internal_set_onVoteComplete))::GlobalNamespace::__VoteManager__OnVoteComplete* onVoteComplete;

  /// @brief Field prompt, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_prompt, put = __cordl_internal_set_prompt))::GlobalNamespace::ImaginationPrompt* prompt;

  /// @brief Field rejectedPrompt, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_rejectedPrompt, put = __cordl_internal_set_rejectedPrompt))::GlobalNamespace::ImaginationPrompt* rejectedPrompt;

  __declspec(property(get = get_voteCallerUserID, put = set_voteCallerUserID))::StringW voteCallerUserID;

  /// @brief Field voteEndTime, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_voteEndTime, put = __cordl_internal_set_voteEndTime))::System::DateTime voteEndTime;

  __declspec(property(get = get_voteID, put = set_voteID))::StringW voteID;

  /// @brief Field voteStartTime, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_voteStartTime, put = __cordl_internal_set_voteStartTime))::System::DateTime voteStartTime;

  __declspec(property(get = get_voteTargetUserID, put = set_voteTargetUserID))::StringW voteTargetUserID;

  __declspec(property(get = get_voteType, put = set_voteType))::GlobalNamespace::VoteType voteType;

  __declspec(property(get = get_yesVoteCount)) int32_t yesVoteCount;

  /// @brief Field yesVotes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_yesVotes, put = __cordl_internal_set_yesVotes))::System::Collections::Generic::List_1<::StringW>* yesVotes;

  /// @brief Method Cancel, addr 0xf27650, size 0x6c, virtual false, abstract: false, final false
  inline void Cancel();

  /// @brief Method CastVote, addr 0xf270b4, size 0x10c, virtual false, abstract: false, final false
  inline void CastVote(::StringW userID, bool approved);

  /// @brief Method DoComplete, addr 0xf2730c, size 0x150, virtual false, abstract: false, final false
  inline void DoComplete(bool approved);

  /// @brief Method IsComplete, addr 0xf271c0, size 0x14c, virtual false, abstract: false, final false
  inline bool IsComplete(ByRef<bool> approved);

  static inline ::GlobalNamespace::VoteData* New_ctor(bool isMaster, ::StringW voteID, ::GlobalNamespace::VoteType voteType, ::StringW voteCallerUserID, ::StringW voteTargetUserID, bool isLocalVote,
                                                      bool isAutoVote, ::GlobalNamespace::ImaginationPrompt* prompt, ::GlobalNamespace::ImaginationPrompt* approvedPrompt,
                                                      ::GlobalNamespace::ImaginationPrompt* rejectedPrompt, ::GlobalNamespace::__VoteManager__OnVoteComplete* onVoteComplete);

  constexpr bool const& __cordl_internal_get__isMaster_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isMaster_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__voteCallerUserID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__voteCallerUserID_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__voteID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__voteID_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__voteTargetUserID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__voteTargetUserID_k__BackingField();

  constexpr ::GlobalNamespace::VoteType const& __cordl_internal_get__voteType_k__BackingField() const;

  constexpr ::GlobalNamespace::VoteType& __cordl_internal_get__voteType_k__BackingField();

  constexpr ::GlobalNamespace::ImaginationPrompt*& __cordl_internal_get_approvedPrompt();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ImaginationPrompt*> const& __cordl_internal_get_approvedPrompt() const;

  constexpr bool const& __cordl_internal_get_isLocalVote() const;

  constexpr bool& __cordl_internal_get_isLocalVote();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_noVotes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_noVotes() const;

  constexpr ::GlobalNamespace::__VoteManager__OnVoteComplete*& __cordl_internal_get_onVoteComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VoteManager__OnVoteComplete*> const& __cordl_internal_get_onVoteComplete() const;

  constexpr ::GlobalNamespace::ImaginationPrompt*& __cordl_internal_get_prompt();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ImaginationPrompt*> const& __cordl_internal_get_prompt() const;

  constexpr ::GlobalNamespace::ImaginationPrompt*& __cordl_internal_get_rejectedPrompt();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ImaginationPrompt*> const& __cordl_internal_get_rejectedPrompt() const;

  constexpr ::System::DateTime const& __cordl_internal_get_voteEndTime() const;

  constexpr ::System::DateTime& __cordl_internal_get_voteEndTime();

  constexpr ::System::DateTime const& __cordl_internal_get_voteStartTime() const;

  constexpr ::System::DateTime& __cordl_internal_get_voteStartTime();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_yesVotes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_yesVotes() const;

  constexpr void __cordl_internal_set__isMaster_k__BackingField(bool value);

  constexpr void __cordl_internal_set__voteCallerUserID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__voteID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__voteTargetUserID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__voteType_k__BackingField(::GlobalNamespace::VoteType value);

  constexpr void __cordl_internal_set_approvedPrompt(::GlobalNamespace::ImaginationPrompt* value);

  constexpr void __cordl_internal_set_isLocalVote(bool value);

  constexpr void __cordl_internal_set_noVotes(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_onVoteComplete(::GlobalNamespace::__VoteManager__OnVoteComplete* value);

  constexpr void __cordl_internal_set_prompt(::GlobalNamespace::ImaginationPrompt* value);

  constexpr void __cordl_internal_set_rejectedPrompt(::GlobalNamespace::ImaginationPrompt* value);

  constexpr void __cordl_internal_set_voteEndTime(::System::DateTime value);

  constexpr void __cordl_internal_set_voteStartTime(::System::DateTime value);

  constexpr void __cordl_internal_set_yesVotes(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0xf26ef4, size 0x1c0, virtual false, abstract: false, final false
  inline void _ctor(bool isMaster, ::StringW voteID, ::GlobalNamespace::VoteType voteType, ::StringW voteCallerUserID, ::StringW voteTargetUserID, bool isLocalVote, bool isAutoVote,
                    ::GlobalNamespace::ImaginationPrompt* prompt, ::GlobalNamespace::ImaginationPrompt* approvedPrompt, ::GlobalNamespace::ImaginationPrompt* rejectedPrompt,
                    ::GlobalNamespace::__VoteManager__OnVoteComplete* onVoteComplete);

  /// @brief Method get_isMaster, addr 0xf26e10, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMaster();

  /// @brief Method get_noVoteCount, addr 0xf26eac, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_noVoteCount();

  /// @brief Method get_voteCallerUserID, addr 0xf26e44, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_voteCallerUserID();

  /// @brief Method get_voteID, addr 0xf26e24, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_voteID();

  /// @brief Method get_voteTargetUserID, addr 0xf26e54, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_voteTargetUserID();

  /// @brief Method get_voteType, addr 0xf26e34, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::VoteType get_voteType();

  /// @brief Method get_yesVoteCount, addr 0xf26e64, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_yesVoteCount();

  /// @brief Method set_isMaster, addr 0xf26e18, size 0xc, virtual false, abstract: false, final false
  inline void set_isMaster(bool value);

  /// @brief Method set_voteCallerUserID, addr 0xf26e4c, size 0x8, virtual false, abstract: false, final false
  inline void set_voteCallerUserID(::StringW value);

  /// @brief Method set_voteID, addr 0xf26e2c, size 0x8, virtual false, abstract: false, final false
  inline void set_voteID(::StringW value);

  /// @brief Method set_voteTargetUserID, addr 0xf26e5c, size 0x8, virtual false, abstract: false, final false
  inline void set_voteTargetUserID(::StringW value);

  /// @brief Method set_voteType, addr 0xf26e3c, size 0x8, virtual false, abstract: false, final false
  inline void set_voteType(::GlobalNamespace::VoteType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VoteData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VoteData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VoteData(VoteData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VoteData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VoteData(VoteData const&) = delete;

  /// @brief Field <isMaster>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____isMaster_k__BackingField;

  /// @brief Field <voteID>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____voteID_k__BackingField;

  /// @brief Field <voteType>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::VoteType ____voteType_k__BackingField;

  /// @brief Field <voteCallerUserID>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____voteCallerUserID_k__BackingField;

  /// @brief Field <voteTargetUserID>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____voteTargetUserID_k__BackingField;

  /// @brief Field isLocalVote, offset: 0x38, size: 0x1, def value: None
  bool ___isLocalVote;

  /// @brief Field prompt, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ImaginationPrompt* ___prompt;

  /// @brief Field approvedPrompt, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ImaginationPrompt* ___approvedPrompt;

  /// @brief Field rejectedPrompt, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ImaginationPrompt* ___rejectedPrompt;

  /// @brief Field yesVotes, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___yesVotes;

  /// @brief Field noVotes, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___noVotes;

  /// @brief Field onVoteComplete, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::__VoteManager__OnVoteComplete* ___onVoteComplete;

  /// @brief Field voteStartTime, offset: 0x70, size: 0x8, def value: None
  ::System::DateTime ___voteStartTime;

  /// @brief Field voteEndTime, offset: 0x78, size: 0x8, def value: None
  ::System::DateTime ___voteEndTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VoteData, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VoteData, ____isMaster_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoteData, ____voteID_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoteData, ____voteType_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoteData, ____voteCallerUserID_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoteData, ____voteTargetUserID_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoteData, ___isLocalVote) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoteData, ___prompt) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoteData, ___approvedPrompt) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoteData, ___rejectedPrompt) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoteData, ___yesVotes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoteData, ___noVotes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoteData, ___onVoteComplete) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoteData, ___voteStartTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoteData, ___voteEndTime) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VoteData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VoteData*, "", "VoteData");
