#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ObjRefSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ObjRefSurrogate.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ObjRefSurrogate::*)(
    ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Remoting::Messaging::ObjRefSurrogate::GetObjectData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x18674b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ObjRefSurrogate.SetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Remoting::Messaging::ObjRefSurrogate::*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                ::System::Runtime::Serialization::ISurrogateSelector*)>(&::System::Runtime::Remoting::Messaging::ObjRefSurrogate::SetObjectData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18675c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ObjRefSurrogate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ObjRefSurrogate::*)()>(
    &::System::Runtime::Remoting::Messaging::ObjRefSurrogate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1867610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializationSurrogate"
constexpr System::Runtime::Remoting::Messaging::ObjRefSurrogate::operator ::System::Runtime::Serialization::ISerializationSurrogate*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializationSurrogate*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializationSurrogate"
constexpr ::System::Runtime::Serialization::ISerializationSurrogate* System::Runtime::Remoting::Messaging::ObjRefSurrogate::i___System__Runtime__Serialization__ISerializationSurrogate() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializationSurrogate*>(static_cast<void*>(this));
}
inline void System::Runtime::Remoting::Messaging::ObjRefSurrogate::GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si,
                                                                                 ::System::Runtime::Serialization::StreamingContext sc) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, si, sc);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::ObjRefSurrogate::SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si,
                                                                                              ::System::Runtime::Serialization::StreamingContext sc,
                                                                                              ::System::Runtime::Serialization::ISurrogateSelector* selector) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj, si, sc, selector);
}
inline ::System::Runtime::Remoting::Messaging::ObjRefSurrogate* System::Runtime::Remoting::Messaging::ObjRefSurrogate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>());
}
inline void System::Runtime::Remoting::Messaging::ObjRefSurrogate::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ObjRefSurrogate*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::ObjRefSurrogate::ObjRefSurrogate() {}
