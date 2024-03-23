#pragma once
#include "GlobalNamespace/zzzz__VoteType_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VoteData_def.hpp"
#include "GlobalNamespace/zzzz__ImaginationPrompt_def.hpp"
#include "GlobalNamespace/zzzz__VoteManager_def.hpp"
#include "GlobalNamespace/zzzz__VoteType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoteData.get_isMaster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::VoteData::*)()>(&::GlobalNamespace::VoteData::get_isMaster)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf26e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "get_isMaster",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData.set_isMaster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VoteData::*)(bool)>(&::GlobalNamespace::VoteData::set_isMaster)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf26e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "set_isMaster", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData.get_voteID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::VoteData::*)()>(&::GlobalNamespace::VoteData::get_voteID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf26e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "get_voteID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData.set_voteID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VoteData::*)(::StringW)>(&::GlobalNamespace::VoteData::set_voteID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf26e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "set_voteID", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData.get_voteType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VoteType (::GlobalNamespace::VoteData::*)()>(&::GlobalNamespace::VoteData::get_voteType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf26e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "get_voteType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData.set_voteType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VoteData::*)(::GlobalNamespace::VoteType)>(&::GlobalNamespace::VoteData::set_voteType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf26e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "set_voteType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VoteType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData.get_voteCallerUserID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::VoteData::*)()>(&::GlobalNamespace::VoteData::get_voteCallerUserID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf26e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "get_voteCallerUserID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData.set_voteCallerUserID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VoteData::*)(::StringW)>(&::GlobalNamespace::VoteData::set_voteCallerUserID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf26e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "set_voteCallerUserID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData.get_voteTargetUserID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::VoteData::*)()>(&::GlobalNamespace::VoteData::get_voteTargetUserID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf26e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "get_voteTargetUserID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData.set_voteTargetUserID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VoteData::*)(::StringW)>(&::GlobalNamespace::VoteData::set_voteTargetUserID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf26e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "set_voteTargetUserID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData.get_yesVoteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::VoteData::*)()>(&::GlobalNamespace::VoteData::get_yesVoteCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xf26e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "get_yesVoteCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData.get_noVoteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::VoteData::*)()>(&::GlobalNamespace::VoteData::get_noVoteCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xf26eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "get_noVoteCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VoteData::*)(
    bool, ::StringW, ::GlobalNamespace::VoteType, ::StringW, ::StringW, bool, bool, ::GlobalNamespace::ImaginationPrompt*, ::GlobalNamespace::ImaginationPrompt*, ::GlobalNamespace::ImaginationPrompt*,
    ::GlobalNamespace::__VoteManager__OnVoteComplete*)>(&::GlobalNamespace::VoteData::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xf26ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VoteType>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ImaginationPrompt*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ImaginationPrompt*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ImaginationPrompt*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__VoteManager__OnVoteComplete*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData.CastVote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VoteData::*)(::StringW, bool)>(&::GlobalNamespace::VoteData::CastVote)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xf270b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "CastVote", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData.IsComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::VoteData::*)(ByRef<bool>)>(&::GlobalNamespace::VoteData::IsComplete)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xf271c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "IsComplete", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData.DoComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VoteData::*)(bool)>(&::GlobalNamespace::VoteData::DoComplete)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xf2730c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "DoComplete", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoteData.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VoteData::*)()>(&::GlobalNamespace::VoteData::Cancel)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xf27650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "Cancel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::VoteData::__cordl_internal_get__isMaster_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMaster_k__BackingField;
}
constexpr bool const& GlobalNamespace::VoteData::__cordl_internal_get__isMaster_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMaster_k__BackingField;
}
constexpr void GlobalNamespace::VoteData::__cordl_internal_set__isMaster_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isMaster_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::VoteData::__cordl_internal_get__voteID_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____voteID_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::VoteData::__cordl_internal_get__voteID_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____voteID_k__BackingField;
}
constexpr void GlobalNamespace::VoteData::__cordl_internal_set__voteID_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____voteID_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::VoteType& GlobalNamespace::VoteData::__cordl_internal_get__voteType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____voteType_k__BackingField;
}
constexpr ::GlobalNamespace::VoteType const& GlobalNamespace::VoteData::__cordl_internal_get__voteType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____voteType_k__BackingField;
}
constexpr void GlobalNamespace::VoteData::__cordl_internal_set__voteType_k__BackingField(::GlobalNamespace::VoteType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____voteType_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::VoteData::__cordl_internal_get__voteCallerUserID_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____voteCallerUserID_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::VoteData::__cordl_internal_get__voteCallerUserID_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____voteCallerUserID_k__BackingField;
}
constexpr void GlobalNamespace::VoteData::__cordl_internal_set__voteCallerUserID_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____voteCallerUserID_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::VoteData::__cordl_internal_get__voteTargetUserID_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____voteTargetUserID_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::VoteData::__cordl_internal_get__voteTargetUserID_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____voteTargetUserID_k__BackingField;
}
constexpr void GlobalNamespace::VoteData::__cordl_internal_set__voteTargetUserID_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____voteTargetUserID_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::VoteData::__cordl_internal_get_isLocalVote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLocalVote;
}
constexpr bool const& GlobalNamespace::VoteData::__cordl_internal_get_isLocalVote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLocalVote;
}
constexpr void GlobalNamespace::VoteData::__cordl_internal_set_isLocalVote(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isLocalVote = value;
}
constexpr ::GlobalNamespace::ImaginationPrompt*& GlobalNamespace::VoteData::__cordl_internal_get_prompt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prompt;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ImaginationPrompt*> const& GlobalNamespace::VoteData::__cordl_internal_get_prompt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prompt;
}
constexpr void GlobalNamespace::VoteData::__cordl_internal_set_prompt(::GlobalNamespace::ImaginationPrompt* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prompt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ImaginationPrompt*& GlobalNamespace::VoteData::__cordl_internal_get_approvedPrompt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___approvedPrompt;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ImaginationPrompt*> const& GlobalNamespace::VoteData::__cordl_internal_get_approvedPrompt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___approvedPrompt;
}
constexpr void GlobalNamespace::VoteData::__cordl_internal_set_approvedPrompt(::GlobalNamespace::ImaginationPrompt* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___approvedPrompt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ImaginationPrompt*& GlobalNamespace::VoteData::__cordl_internal_get_rejectedPrompt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rejectedPrompt;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ImaginationPrompt*> const& GlobalNamespace::VoteData::__cordl_internal_get_rejectedPrompt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rejectedPrompt;
}
constexpr void GlobalNamespace::VoteData::__cordl_internal_set_rejectedPrompt(::GlobalNamespace::ImaginationPrompt* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rejectedPrompt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::VoteData::__cordl_internal_get_yesVotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yesVotes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::VoteData::__cordl_internal_get_yesVotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yesVotes;
}
constexpr void GlobalNamespace::VoteData::__cordl_internal_set_yesVotes(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___yesVotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::VoteData::__cordl_internal_get_noVotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noVotes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::VoteData::__cordl_internal_get_noVotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noVotes;
}
constexpr void GlobalNamespace::VoteData::__cordl_internal_set_noVotes(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___noVotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__VoteManager__OnVoteComplete*& GlobalNamespace::VoteData::__cordl_internal_get_onVoteComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onVoteComplete;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VoteManager__OnVoteComplete*> const& GlobalNamespace::VoteData::__cordl_internal_get_onVoteComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onVoteComplete;
}
constexpr void GlobalNamespace::VoteData::__cordl_internal_set_onVoteComplete(::GlobalNamespace::__VoteManager__OnVoteComplete* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onVoteComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& GlobalNamespace::VoteData::__cordl_internal_get_voteStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___voteStartTime;
}
constexpr ::System::DateTime const& GlobalNamespace::VoteData::__cordl_internal_get_voteStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___voteStartTime;
}
constexpr void GlobalNamespace::VoteData::__cordl_internal_set_voteStartTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___voteStartTime = value;
}
constexpr ::System::DateTime& GlobalNamespace::VoteData::__cordl_internal_get_voteEndTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___voteEndTime;
}
constexpr ::System::DateTime const& GlobalNamespace::VoteData::__cordl_internal_get_voteEndTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___voteEndTime;
}
constexpr void GlobalNamespace::VoteData::__cordl_internal_set_voteEndTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___voteEndTime = value;
}
inline bool GlobalNamespace::VoteData::get_isMaster() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "get_isMaster",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::VoteData::set_isMaster(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "set_isMaster", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::VoteData::get_voteID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "get_voteID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::VoteData::set_voteID(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "set_voteID", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::VoteType GlobalNamespace::VoteData::get_voteType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "get_voteType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VoteType, false>(this, ___internal_method);
}
inline void GlobalNamespace::VoteData::set_voteType(::GlobalNamespace::VoteType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "set_voteType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VoteType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::VoteData::get_voteCallerUserID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "get_voteCallerUserID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::VoteData::set_voteCallerUserID(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "set_voteCallerUserID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::VoteData::get_voteTargetUserID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "get_voteTargetUserID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::VoteData::set_voteTargetUserID(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "set_voteTargetUserID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::VoteData::get_yesVoteCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "get_yesVoteCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::VoteData::get_noVoteCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "get_noVoteCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VoteData* GlobalNamespace::VoteData::New_ctor(bool isMaster, ::StringW voteID, ::GlobalNamespace::VoteType voteType, ::StringW voteCallerUserID, ::StringW voteTargetUserID,
                                                                        bool isLocalVote, bool isAutoVote, ::GlobalNamespace::ImaginationPrompt* prompt,
                                                                        ::GlobalNamespace::ImaginationPrompt* approvedPrompt, ::GlobalNamespace::ImaginationPrompt* rejectedPrompt,
                                                                        ::GlobalNamespace::__VoteManager__OnVoteComplete* onVoteComplete) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::VoteData*>(isMaster, voteID, voteType, voteCallerUserID, voteTargetUserID, isLocalVote, isAutoVote, prompt, approvedPrompt,
                                                                                rejectedPrompt, onVoteComplete));
}
inline void GlobalNamespace::VoteData::_ctor(bool isMaster, ::StringW voteID, ::GlobalNamespace::VoteType voteType, ::StringW voteCallerUserID, ::StringW voteTargetUserID, bool isLocalVote,
                                             bool isAutoVote, ::GlobalNamespace::ImaginationPrompt* prompt, ::GlobalNamespace::ImaginationPrompt* approvedPrompt,
                                             ::GlobalNamespace::ImaginationPrompt* rejectedPrompt, ::GlobalNamespace::__VoteManager__OnVoteComplete* onVoteComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VoteType>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ImaginationPrompt*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ImaginationPrompt*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ImaginationPrompt*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__VoteManager__OnVoteComplete*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isMaster, voteID, voteType, voteCallerUserID, voteTargetUserID, isLocalVote, isAutoVote, prompt, approvedPrompt,
                                                          rejectedPrompt, onVoteComplete);
}
inline void GlobalNamespace::VoteData::CastVote(::StringW userID, bool approved) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "CastVote", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userID, approved);
}
inline bool GlobalNamespace::VoteData::IsComplete(ByRef<bool> approved) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "IsComplete", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, approved);
}
inline void GlobalNamespace::VoteData::DoComplete(bool approved) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "DoComplete", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, approved);
}
inline void GlobalNamespace::VoteData::Cancel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VoteData*>::get(), "Cancel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoteData::VoteData() {}
