#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Xml/Serialization/zzzz__UnreferencedObjectEventHandler_def.hpp"
#include "System/Xml/Serialization/zzzz__UnreferencedObjectEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::UnreferencedObjectEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::UnreferencedObjectEventHandler::*)(::System::Object*, void*)>(
    &::System::Xml::Serialization::UnreferencedObjectEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1257258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::UnreferencedObjectEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::UnreferencedObjectEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::UnreferencedObjectEventHandler::*)(
    ::System::Object*, ::System::Xml::Serialization::UnreferencedObjectEventArgs*)>(&::System::Xml::Serialization::UnreferencedObjectEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1257388;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::UnreferencedObjectEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::UnreferencedObjectEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Xml::Serialization::UnreferencedObjectEventHandler* System::Xml::Serialization::UnreferencedObjectEventHandler::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::UnreferencedObjectEventHandler*>(object, method));
}
inline void System::Xml::Serialization::UnreferencedObjectEventHandler::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::UnreferencedObjectEventHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Xml::Serialization::UnreferencedObjectEventHandler::Invoke(::System::Object* sender, ::System::Xml::Serialization::UnreferencedObjectEventArgs* e) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::UnreferencedObjectEventHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::UnreferencedObjectEventHandler::UnreferencedObjectEventHandler() {}
