#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "Amazon/Runtime/zzzz__StreamTransferProgressArgs_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::StreamTransferProgressArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::StreamTransferProgressArgs::*)(int64_t, int64_t, int64_t)>(
    &::Amazon::Runtime::StreamTransferProgressArgs::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x202114c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::StreamTransferProgressArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::StreamTransferProgressArgs.get_PercentDone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::StreamTransferProgressArgs::*)()>(
    &::Amazon::Runtime::StreamTransferProgressArgs::get_PercentDone)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20211cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::StreamTransferProgressArgs*>::get(),
                                                                               "get_PercentDone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::StreamTransferProgressArgs.get_IncrementTransferred
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::Runtime::StreamTransferProgressArgs::*)()>(
    &::Amazon::Runtime::StreamTransferProgressArgs::get_IncrementTransferred)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20211e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::StreamTransferProgressArgs*>::get(),
                                                                               "get_IncrementTransferred", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::StreamTransferProgressArgs.get_TransferredBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::Runtime::StreamTransferProgressArgs::*)()>(
    &::Amazon::Runtime::StreamTransferProgressArgs::get_TransferredBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20211e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::StreamTransferProgressArgs*>::get(),
                                                                               "get_TransferredBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::StreamTransferProgressArgs.get_TotalBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::Runtime::StreamTransferProgressArgs::*)()>(
    &::Amazon::Runtime::StreamTransferProgressArgs::get_TotalBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20211f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::StreamTransferProgressArgs*>::get(),
                                                                               "get_TotalBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::StreamTransferProgressArgs.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::StreamTransferProgressArgs::*)()>(
    &::Amazon::Runtime::StreamTransferProgressArgs::ToString)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x20211f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::StreamTransferProgressArgs*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::StreamTransferProgressArgs*>::get(), 3));
    return ___internal_method;
  }
};
constexpr int64_t& Amazon::Runtime::StreamTransferProgressArgs::__cordl_internal_get__incrementTransferred() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____incrementTransferred;
}
constexpr int64_t const& Amazon::Runtime::StreamTransferProgressArgs::__cordl_internal_get__incrementTransferred() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____incrementTransferred;
}
constexpr void Amazon::Runtime::StreamTransferProgressArgs::__cordl_internal_set__incrementTransferred(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____incrementTransferred = value;
}
constexpr int64_t& Amazon::Runtime::StreamTransferProgressArgs::__cordl_internal_get__total() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____total;
}
constexpr int64_t const& Amazon::Runtime::StreamTransferProgressArgs::__cordl_internal_get__total() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____total;
}
constexpr void Amazon::Runtime::StreamTransferProgressArgs::__cordl_internal_set__total(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____total = value;
}
constexpr int64_t& Amazon::Runtime::StreamTransferProgressArgs::__cordl_internal_get__transferred() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transferred;
}
constexpr int64_t const& Amazon::Runtime::StreamTransferProgressArgs::__cordl_internal_get__transferred() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transferred;
}
constexpr void Amazon::Runtime::StreamTransferProgressArgs::__cordl_internal_set__transferred(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transferred = value;
}
inline ::Amazon::Runtime::StreamTransferProgressArgs* Amazon::Runtime::StreamTransferProgressArgs::New_ctor(int64_t incrementTransferred, int64_t transferred, int64_t total) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::StreamTransferProgressArgs*>(incrementTransferred, transferred, total));
}
inline void Amazon::Runtime::StreamTransferProgressArgs::_ctor(int64_t incrementTransferred, int64_t transferred, int64_t total) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::StreamTransferProgressArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, incrementTransferred, transferred, total);
}
inline int32_t Amazon::Runtime::StreamTransferProgressArgs::get_PercentDone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::StreamTransferProgressArgs*>::get(),
                                                                             "get_PercentDone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t Amazon::Runtime::StreamTransferProgressArgs::get_IncrementTransferred() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::StreamTransferProgressArgs*>::get(),
                                                                             "get_IncrementTransferred", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t Amazon::Runtime::StreamTransferProgressArgs::get_TransferredBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::StreamTransferProgressArgs*>::get(),
                                                                             "get_TransferredBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t Amazon::Runtime::StreamTransferProgressArgs::get_TotalBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::StreamTransferProgressArgs*>::get(),
                                                                             "get_TotalBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::StreamTransferProgressArgs::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::StreamTransferProgressArgs*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::StreamTransferProgressArgs::StreamTransferProgressArgs() {}
