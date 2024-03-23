#pragma once
#include "System/Collections/zzzz__ReadOnlyCollectionBase_impl.hpp"
#include "System/ComponentModel/zzzz__ComponentCollection_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ComponentCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ComponentCollection::*)(
    ::ArrayW<::System::ComponentModel::IComponent*, ::Array<::System::ComponentModel::IComponent*>*>)>(&::System::ComponentModel::ComponentCollection::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1ae6cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::ComponentModel::IComponent*, ::Array<::System::ComponentModel::IComponent*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentCollection.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::IComponent* (::System::ComponentModel::ComponentCollection::*)(::StringW)>(
    &::System::ComponentModel::ComponentCollection::get_Item)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x1ae6d40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentCollection*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentCollection.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::IComponent* (::System::ComponentModel::ComponentCollection::*)(int32_t)>(
    &::System::ComponentModel::ComponentCollection::get_Item)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1ae72c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentCollection*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentCollection.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ComponentCollection::*)(
    ::ArrayW<::System::ComponentModel::IComponent*, ::Array<::System::ComponentModel::IComponent*>*>, int32_t)>(&::System::ComponentModel::ComponentCollection::CopyTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1ae7358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentCollection*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::ComponentModel::IComponent*, ::Array<::System::ComponentModel::IComponent*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::ComponentCollection*
System::ComponentModel::ComponentCollection::New_ctor(::ArrayW<::System::ComponentModel::IComponent*, ::Array<::System::ComponentModel::IComponent*>*> components) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::ComponentCollection*>(components));
}
inline void System::ComponentModel::ComponentCollection::_ctor(::ArrayW<::System::ComponentModel::IComponent*, ::Array<::System::ComponentModel::IComponent*>*> components) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::ComponentModel::IComponent*, ::Array<::System::ComponentModel::IComponent*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, components);
}
inline ::System::ComponentModel::IComponent* System::ComponentModel::ComponentCollection::get_Item(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentCollection*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComponent*, false>(this, ___internal_method, name);
}
inline ::System::ComponentModel::IComponent* System::ComponentModel::ComponentCollection::get_Item(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentCollection*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComponent*, false>(this, ___internal_method, index);
}
inline void System::ComponentModel::ComponentCollection::CopyTo(::ArrayW<::System::ComponentModel::IComponent*, ::Array<::System::ComponentModel::IComponent*>*> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentCollection*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::ComponentModel::IComponent*, ::Array<::System::ComponentModel::IComponent*>*>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ComponentCollection::ComponentCollection() {}
