#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ThirdParty/BouncyCastle/Utilities/IO/Pem/zzzz__PemReader_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "ThirdParty/BouncyCastle/Utilities/IO/Pem/zzzz__PemObject_def.hpp"
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::*)(::System::IO::TextReader*)>(
    &::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x14b3a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader.get_Reader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::TextReader* (::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::*)()>(
    &::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::get_Reader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14b6830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(), "get_Reader",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader.ReadPemObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObject* (
    ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::*)()>(&::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::ReadPemObject)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x14b3bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(), "ReadPemObject",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader.LoadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObject* (
    ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::*)(::StringW)>(&::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::LoadObject)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x14b6838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(), "LoadObject",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::IO::TextReader*& ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::TextReader*> const& ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::__cordl_internal_set_reader(::System::IO::TextReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader* ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::New_ctor(::System::IO::TextReader* reader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader*>(reader));
}
inline void ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::_ctor(::System::IO::TextReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::System::IO::TextReader* ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::get_Reader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(),
                                                                             "get_Reader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::TextReader*, false>(this, ___internal_method);
}
inline ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObject* ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::ReadPemObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(),
                                                                             "ReadPemObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObject*, false>(this, ___internal_method);
}
inline ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObject* ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::LoadObject(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(), "LoadObject",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObject*, false>(this, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader::PemReader() {}
