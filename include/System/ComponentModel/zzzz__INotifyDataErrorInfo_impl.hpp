#pragma once
#include "System/ComponentModel/zzzz__INotifyDataErrorInfo_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/ComponentModel/zzzz__DataErrorsChangedEventArgs_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::INotifyDataErrorInfo.get_HasErrors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::INotifyDataErrorInfo::*)()>(
    &::System::ComponentModel::INotifyDataErrorInfo::get_HasErrors)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyDataErrorInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyDataErrorInfo*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::INotifyDataErrorInfo.GetErrors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::System::ComponentModel::INotifyDataErrorInfo::*)(::StringW)>(
    &::System::ComponentModel::INotifyDataErrorInfo::GetErrors)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyDataErrorInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyDataErrorInfo*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::INotifyDataErrorInfo.add_ErrorsChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::INotifyDataErrorInfo::*)(
    ::System::EventHandler_1<::System::ComponentModel::DataErrorsChangedEventArgs*>*)>(&::System::ComponentModel::INotifyDataErrorInfo::add_ErrorsChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyDataErrorInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyDataErrorInfo*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::INotifyDataErrorInfo.remove_ErrorsChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::INotifyDataErrorInfo::*)(
    ::System::EventHandler_1<::System::ComponentModel::DataErrorsChangedEventArgs*>*)>(&::System::ComponentModel::INotifyDataErrorInfo::remove_ErrorsChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyDataErrorInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyDataErrorInfo*>::get(), 3));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::INotifyDataErrorInfo::get_HasErrors() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyDataErrorInfo*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* System::ComponentModel::INotifyDataErrorInfo::GetErrors(::StringW propertyName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyDataErrorInfo*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method, propertyName);
}
inline void System::ComponentModel::INotifyDataErrorInfo::add_ErrorsChanged(::System::EventHandler_1<::System::ComponentModel::DataErrorsChangedEventArgs*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyDataErrorInfo*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::ComponentModel::INotifyDataErrorInfo::remove_ErrorsChanged(::System::EventHandler_1<::System::ComponentModel::DataErrorsChangedEventArgs*>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyDataErrorInfo*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
