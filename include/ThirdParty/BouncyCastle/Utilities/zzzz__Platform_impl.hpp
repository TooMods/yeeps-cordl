#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ThirdParty/BouncyCastle/Utilities/zzzz__Platform_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Utilities::Platform.CreateArrayList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (*)()>(&::ThirdParty::BouncyCastle::Utilities::Platform::CreateArrayList)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x14b5c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::Platform*>::get(),
                                                                               "CreateArrayList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Utilities::Platform.CreateArrayList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (*)(int32_t)>(&::ThirdParty::BouncyCastle::Utilities::Platform::CreateArrayList)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x14b5cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::Platform*>::get(), "CreateArrayList",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Utilities::Platform.CreateArrayList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (*)(::System::Collections::ICollection*)>(
    &::ThirdParty::BouncyCastle::Utilities::Platform::CreateArrayList)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x14b5d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::Platform*>::get(), "CreateArrayList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Utilities::Platform.CreateArrayList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (*)(::System::Collections::IEnumerable*)>(
    &::ThirdParty::BouncyCastle::Utilities::Platform::CreateArrayList)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x14b614c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::Platform*>::get(), "CreateArrayList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Utilities::Platform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::BouncyCastle::Utilities::Platform::*)()>(
    &::ThirdParty::BouncyCastle::Utilities::Platform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14b64dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::Platform*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Collections::IList* ThirdParty::BouncyCastle::Utilities::Platform::CreateArrayList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::Platform*>::get(),
                                                                             "CreateArrayList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::IList* ThirdParty::BouncyCastle::Utilities::Platform::CreateArrayList(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::Platform*>::get(), "CreateArrayList",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(nullptr, ___internal_method, capacity);
}
inline ::System::Collections::IList* ThirdParty::BouncyCastle::Utilities::Platform::CreateArrayList(::System::Collections::ICollection* collection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::Platform*>::get(), "CreateArrayList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(nullptr, ___internal_method, collection);
}
inline ::System::Collections::IList* ThirdParty::BouncyCastle::Utilities::Platform::CreateArrayList(::System::Collections::IEnumerable* collection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::Platform*>::get(), "CreateArrayList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(nullptr, ___internal_method, collection);
}
inline ::ThirdParty::BouncyCastle::Utilities::Platform* ThirdParty::BouncyCastle::Utilities::Platform::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::BouncyCastle::Utilities::Platform*>());
}
inline void ThirdParty::BouncyCastle::Utilities::Platform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::Platform*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ThirdParty::BouncyCastle::Utilities::Platform::Platform() {}
