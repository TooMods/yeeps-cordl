#pragma once
#include "System/ComponentModel/zzzz__INestedContainer_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/ComponentModel/zzzz__IContainer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::INestedContainer.get_Owner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::IComponent* (::System::ComponentModel::INestedContainer::*)()>(
    &::System::ComponentModel::INestedContainer::get_Owner)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INestedContainer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INestedContainer*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ComponentModel::IContainer"
constexpr System::ComponentModel::INestedContainer::operator ::System::ComponentModel::IContainer*() noexcept {
  return static_cast<::System::ComponentModel::IContainer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IContainer"
constexpr ::System::ComponentModel::IContainer* System::ComponentModel::INestedContainer::i___System__ComponentModel__IContainer() noexcept {
  return static_cast<::System::ComponentModel::IContainer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::ComponentModel::INestedContainer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::ComponentModel::INestedContainer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
inline ::System::ComponentModel::IComponent* System::ComponentModel::INestedContainer::get_Owner() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INestedContainer*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComponent*, false>(this, ___internal_method);
}
