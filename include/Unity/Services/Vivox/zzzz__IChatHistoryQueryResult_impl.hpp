#pragma once
#include "Unity/Services/Vivox/zzzz__IChatHistoryQueryResult_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__AccountId_def.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxMessage_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::IChatHistoryQueryResult.get_RequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::IChatHistoryQueryResult::*)()>(
    &::Unity::Services::Vivox::IChatHistoryQueryResult::get_RequestId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChatHistoryQueryResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChatHistoryQueryResult*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChatHistoryQueryResult.get_Participant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::AccountId* (::Unity::Services::Vivox::IChatHistoryQueryResult::*)()>(
    &::Unity::Services::Vivox::IChatHistoryQueryResult::get_Participant)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChatHistoryQueryResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChatHistoryQueryResult*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::IChatHistoryQueryResult.get_VivoxMessages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>* (
    ::Unity::Services::Vivox::IChatHistoryQueryResult::*)()>(&::Unity::Services::Vivox::IChatHistoryQueryResult::get_VivoxMessages)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChatHistoryQueryResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChatHistoryQueryResult*>::get(), 2));
    return ___internal_method;
  }
};
inline ::StringW Unity::Services::Vivox::IChatHistoryQueryResult::get_RequestId() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChatHistoryQueryResult*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::AccountId* Unity::Services::Vivox::IChatHistoryQueryResult::get_Participant() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChatHistoryQueryResult*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::AccountId*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>* Unity::Services::Vivox::IChatHistoryQueryResult::get_VivoxMessages() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IChatHistoryQueryResult*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Unity::Services::Vivox::VivoxMessage*>*, false>(this, ___internal_method);
}
