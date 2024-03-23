#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__DependencyTreeSortFailedException_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__DependencyTree_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreeSortFailedException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::DependencyTreeSortFailedException::*)(
    ::Unity::Services::Core::Internal::DependencyTree*, ::System::Collections::Generic::ICollection_1<int32_t>*)>(&::Unity::Services::Core::Internal::DependencyTreeSortFailedException::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x266c5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeSortFailedException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::DependencyTree*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreeSortFailedException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::DependencyTreeSortFailedException::*)(
    ::Unity::Services::Core::Internal::DependencyTree*, ::System::Collections::Generic::ICollection_1<int32_t>*, ::System::Exception*)>(
    &::Unity::Services::Core::Internal::DependencyTreeSortFailedException::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x266c728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeSortFailedException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::DependencyTree*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<int32_t>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreeSortFailedException.CreateExceptionMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::Unity::Services::Core::Internal::DependencyTree*, ::System::Collections::Generic::ICollection_1<int32_t>*, ::System::Exception*)>(
        &::Unity::Services::Core::Internal::DependencyTreeSortFailedException::CreateExceptionMessage)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x266c648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeSortFailedException*>::get(), "CreateExceptionMessage",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::DependencyTree*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<int32_t>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Services::Core::Internal::DependencyTreeSortFailedException*
Unity::Services::Core::Internal::DependencyTreeSortFailedException::New_ctor(::Unity::Services::Core::Internal::DependencyTree* tree, ::System::Collections::Generic::ICollection_1<int32_t>* target) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::DependencyTreeSortFailedException*>(tree, target));
}
inline void Unity::Services::Core::Internal::DependencyTreeSortFailedException::_ctor(::Unity::Services::Core::Internal::DependencyTree* tree,
                                                                                      ::System::Collections::Generic::ICollection_1<int32_t>* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeSortFailedException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::DependencyTree*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tree, target);
}
inline ::Unity::Services::Core::Internal::DependencyTreeSortFailedException*
Unity::Services::Core::Internal::DependencyTreeSortFailedException::New_ctor(::Unity::Services::Core::Internal::DependencyTree* tree, ::System::Collections::Generic::ICollection_1<int32_t>* target,
                                                                             ::System::Exception* inner) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::DependencyTreeSortFailedException*>(tree, target, inner));
}
inline void Unity::Services::Core::Internal::DependencyTreeSortFailedException::_ctor(::Unity::Services::Core::Internal::DependencyTree* tree,
                                                                                      ::System::Collections::Generic::ICollection_1<int32_t>* target, ::System::Exception* inner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeSortFailedException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::DependencyTree*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tree, target, inner);
}
/// @param inner: ::System::Exception* (default: nullptr)
inline ::StringW Unity::Services::Core::Internal::DependencyTreeSortFailedException::CreateExceptionMessage(::Unity::Services::Core::Internal::DependencyTree* tree,
                                                                                                            ::System::Collections::Generic::ICollection_1<int32_t>* target,
                                                                                                            ::System::Exception* inner) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeSortFailedException*>::get(), "CreateExceptionMessage",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::DependencyTree*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<int32_t>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, tree, target, inner);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::DependencyTreeSortFailedException::DependencyTreeSortFailedException() {}
