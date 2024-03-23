#pragma once
#include "System/IO/zzzz__Stream_impl.hpp"
#include "ThirdParty/Ionic/Zlib/zzzz__CrcCalculatorStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "ThirdParty/Ionic/Zlib/zzzz__CRC32_def.hpp"
//  Writing Method size for method: ::ThirdParty::Ionic::Zlib::CrcCalculatorStream.get_TotalBytesSlurped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::ThirdParty::Ionic::Zlib::CrcCalculatorStream::*)()>(
    &::ThirdParty::Ionic::Zlib::CrcCalculatorStream::get_TotalBytesSlurped)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x14b35b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(),
                                                                               "get_TotalBytesSlurped", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Ionic::Zlib::CrcCalculatorStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Ionic::Zlib::CrcCalculatorStream::*)(::System::IO::Stream*)>(
    &::ThirdParty::Ionic::Zlib::CrcCalculatorStream::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x14b35cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Ionic::Zlib::CrcCalculatorStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Ionic::Zlib::CrcCalculatorStream::*)(::System::IO::Stream*, int64_t)>(
    &::ThirdParty::Ionic::Zlib::CrcCalculatorStream::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x14b3674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Ionic::Zlib::CrcCalculatorStream.get_Crc32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ThirdParty::Ionic::Zlib::CrcCalculatorStream::*)()>(
    &::ThirdParty::Ionic::Zlib::CrcCalculatorStream::get_Crc32)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x14b3720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(),
                                                                               "get_Crc32", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Ionic::Zlib::CrcCalculatorStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ThirdParty::Ionic::Zlib::CrcCalculatorStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::ThirdParty::Ionic::Zlib::CrcCalculatorStream::Read)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x14b3740;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Ionic::Zlib::CrcCalculatorStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Ionic::Zlib::CrcCalculatorStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::ThirdParty::Ionic::Zlib::CrcCalculatorStream::Write)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x14b37e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Ionic::Zlib::CrcCalculatorStream.get_CanRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ThirdParty::Ionic::Zlib::CrcCalculatorStream::*)()>(
    &::ThirdParty::Ionic::Zlib::CrcCalculatorStream::get_CanRead)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x14b3850;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Ionic::Zlib::CrcCalculatorStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ThirdParty::Ionic::Zlib::CrcCalculatorStream::*)()>(
    &::ThirdParty::Ionic::Zlib::CrcCalculatorStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x14b3870;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Ionic::Zlib::CrcCalculatorStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ThirdParty::Ionic::Zlib::CrcCalculatorStream::*)()>(
    &::ThirdParty::Ionic::Zlib::CrcCalculatorStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x14b3890;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Ionic::Zlib::CrcCalculatorStream.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Ionic::Zlib::CrcCalculatorStream::*)()>(&::ThirdParty::Ionic::Zlib::CrcCalculatorStream::Flush)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x14b38b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Ionic::Zlib::CrcCalculatorStream.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::ThirdParty::Ionic::Zlib::CrcCalculatorStream::*)()>(
    &::ThirdParty::Ionic::Zlib::CrcCalculatorStream::get_Length)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x14b38d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Ionic::Zlib::CrcCalculatorStream.get_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::ThirdParty::Ionic::Zlib::CrcCalculatorStream::*)()>(
    &::ThirdParty::Ionic::Zlib::CrcCalculatorStream::get_Position)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x14b3924;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Ionic::Zlib::CrcCalculatorStream.set_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Ionic::Zlib::CrcCalculatorStream::*)(int64_t)>(
    &::ThirdParty::Ionic::Zlib::CrcCalculatorStream::set_Position)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x14b3940;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Ionic::Zlib::CrcCalculatorStream.Seek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::ThirdParty::Ionic::Zlib::CrcCalculatorStream::*)(int64_t, ::System::IO::SeekOrigin)>(
    &::ThirdParty::Ionic::Zlib::CrcCalculatorStream::Seek)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x14b3980;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Ionic::Zlib::CrcCalculatorStream.SetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Ionic::Zlib::CrcCalculatorStream::*)(int64_t)>(
    &::ThirdParty::Ionic::Zlib::CrcCalculatorStream::SetLength)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x14b39c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 33));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& ThirdParty::Ionic::Zlib::CrcCalculatorStream::__cordl_internal_get__InnerStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InnerStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& ThirdParty::Ionic::Zlib::CrcCalculatorStream::__cordl_internal_get__InnerStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InnerStream;
}
constexpr void ThirdParty::Ionic::Zlib::CrcCalculatorStream::__cordl_internal_set__InnerStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____InnerStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ThirdParty::Ionic::Zlib::CRC32*& ThirdParty::Ionic::Zlib::CrcCalculatorStream::__cordl_internal_get__Crc32() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Crc32;
}
constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Ionic::Zlib::CRC32*> const& ThirdParty::Ionic::Zlib::CrcCalculatorStream::__cordl_internal_get__Crc32() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Crc32;
}
constexpr void ThirdParty::Ionic::Zlib::CrcCalculatorStream::__cordl_internal_set__Crc32(::ThirdParty::Ionic::Zlib::CRC32* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Crc32)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& ThirdParty::Ionic::Zlib::CrcCalculatorStream::__cordl_internal_get__length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr int64_t const& ThirdParty::Ionic::Zlib::CrcCalculatorStream::__cordl_internal_get__length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr void ThirdParty::Ionic::Zlib::CrcCalculatorStream::__cordl_internal_set__length(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____length = value;
}
inline int64_t ThirdParty::Ionic::Zlib::CrcCalculatorStream::get_TotalBytesSlurped() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(),
                                                                             "get_TotalBytesSlurped", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::ThirdParty::Ionic::Zlib::CrcCalculatorStream* ThirdParty::Ionic::Zlib::CrcCalculatorStream::New_ctor(::System::IO::Stream* stream) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>(stream));
}
inline void ThirdParty::Ionic::Zlib::CrcCalculatorStream::_ctor(::System::IO::Stream* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline ::ThirdParty::Ionic::Zlib::CrcCalculatorStream* ThirdParty::Ionic::Zlib::CrcCalculatorStream::New_ctor(::System::IO::Stream* stream, int64_t length) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>(stream, length));
}
inline void ThirdParty::Ionic::Zlib::CrcCalculatorStream::_ctor(::System::IO::Stream* stream, int64_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, length);
}
inline int32_t ThirdParty::Ionic::Zlib::CrcCalculatorStream::get_Crc32() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(),
                                                                             "get_Crc32", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ThirdParty::Ionic::Zlib::CrcCalculatorStream::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline void ThirdParty::Ionic::Zlib::CrcCalculatorStream::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, count);
}
inline bool ThirdParty::Ionic::Zlib::CrcCalculatorStream::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ThirdParty::Ionic::Zlib::CrcCalculatorStream::get_CanSeek() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ThirdParty::Ionic::Zlib::CrcCalculatorStream::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ThirdParty::Ionic::Zlib::CrcCalculatorStream::Flush() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int64_t ThirdParty::Ionic::Zlib::CrcCalculatorStream::get_Length() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t ThirdParty::Ionic::Zlib::CrcCalculatorStream::get_Position() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void ThirdParty::Ionic::Zlib::CrcCalculatorStream::set_Position(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t ThirdParty::Ionic::Zlib::CrcCalculatorStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, offset, origin);
}
inline void ThirdParty::Ionic::Zlib::CrcCalculatorStream::SetLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::ThirdParty::Ionic::Zlib::CrcCalculatorStream::CrcCalculatorStream() {}
