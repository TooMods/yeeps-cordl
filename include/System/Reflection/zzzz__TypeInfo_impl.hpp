#pragma once
#include "System/Reflection/zzzz__BindingFlags_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Reflection/zzzz__IReflectableType_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::TypeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::TypeInfo::*)()>(&::System::Reflection::TypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26159a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeInfo.System_Reflection_IReflectableType_GetTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::TypeInfo* (::System::Reflection::TypeInfo::*)()>(
    &::System::Reflection::TypeInfo::System_Reflection_IReflectableType_GetTypeInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261606c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), "System.Reflection.IReflectableType.GetTypeInfo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeInfo.AsType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::TypeInfo::*)()>(&::System::Reflection::TypeInfo::AsType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2616070;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), 133));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeInfo.get_DeclaredMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* (::System::Reflection::TypeInfo::*)()>(&::System::Reflection::TypeInfo::get_DeclaredMembers)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2616074;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), 134));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeInfo.get_ImplementedInterfaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::System::Reflection::TypeInfo::*)()>(
    &::System::Reflection::TypeInfo::get_ImplementedInterfaces)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2616088;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), 135));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeInfo.IsAssignableFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::TypeInfo::*)(::System::Reflection::TypeInfo*)>(
    &::System::Reflection::TypeInfo::IsAssignableFrom)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2616098;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), 136));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Reflection::IReflectableType"
constexpr System::Reflection::TypeInfo::operator ::System::Reflection::IReflectableType*() noexcept {
  return static_cast<::System::Reflection::IReflectableType*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Reflection::IReflectableType"
constexpr ::System::Reflection::IReflectableType* System::Reflection::TypeInfo::i___System__Reflection__IReflectableType() noexcept {
  return static_cast<::System::Reflection::IReflectableType*>(static_cast<void*>(this));
}
inline ::System::Reflection::TypeInfo* System::Reflection::TypeInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::TypeInfo*>());
}
inline void System::Reflection::TypeInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::TypeInfo* System::Reflection::TypeInfo::System_Reflection_IReflectableType_GetTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), "System.Reflection.IReflectableType.GetTypeInfo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeInfo*, false>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::TypeInfo::AsType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), 133)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* System::Reflection::TypeInfo::get_DeclaredMembers() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), 134)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* System::Reflection::TypeInfo::get_ImplementedInterfaces() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), 135)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method);
}
inline bool System::Reflection::TypeInfo::IsAssignableFrom(::System::Reflection::TypeInfo* typeInfo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), 136)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, typeInfo);
}
// Ctor Parameters []
constexpr ::System::Reflection::TypeInfo::TypeInfo() {}
constexpr ::System::Reflection::BindingFlags System::Reflection::TypeInfo::DeclaredOnlyLookup{ static_cast<int32_t>(0x3e) };
