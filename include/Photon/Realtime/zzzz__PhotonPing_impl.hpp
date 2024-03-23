#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__PhotonPing_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::PhotonPing.StartPing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::PhotonPing::*)(::StringW)>(&::Photon::Realtime::PhotonPing::StartPing)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x224857c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPing*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPing*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::PhotonPing.Done
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::PhotonPing::*)()>(&::Photon::Realtime::PhotonPing::Done)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22485bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPing*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPing*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::PhotonPing.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::PhotonPing::*)()>(&::Photon::Realtime::PhotonPing::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22485fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPing*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPing*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::PhotonPing.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::PhotonPing::*)()>(&::Photon::Realtime::PhotonPing::Init)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x224863c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPing*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::PhotonPing._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::PhotonPing::*)()>(&::Photon::Realtime::PhotonPing::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22486b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPing*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Photon::Realtime::PhotonPing::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Realtime::PhotonPing::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::StringW& Photon::Realtime::PhotonPing::__cordl_internal_get_DebugString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugString;
}
constexpr ::StringW const& Photon::Realtime::PhotonPing::__cordl_internal_get_DebugString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugString;
}
constexpr void Photon::Realtime::PhotonPing::__cordl_internal_set_DebugString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DebugString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Photon::Realtime::PhotonPing::__cordl_internal_get_Successful() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Successful;
}
constexpr bool const& Photon::Realtime::PhotonPing::__cordl_internal_get_Successful() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Successful;
}
constexpr void Photon::Realtime::PhotonPing::__cordl_internal_set_Successful(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Successful = value;
}
constexpr bool& Photon::Realtime::PhotonPing::__cordl_internal_get_GotResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GotResult;
}
constexpr bool const& Photon::Realtime::PhotonPing::__cordl_internal_get_GotResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GotResult;
}
constexpr void Photon::Realtime::PhotonPing::__cordl_internal_set_GotResult(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___GotResult = value;
}
constexpr int32_t& Photon::Realtime::PhotonPing::__cordl_internal_get_PingLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PingLength;
}
constexpr int32_t const& Photon::Realtime::PhotonPing::__cordl_internal_get_PingLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PingLength;
}
constexpr void Photon::Realtime::PhotonPing::__cordl_internal_set_PingLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PingLength = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Photon::Realtime::PhotonPing::__cordl_internal_get_PingBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PingBytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Photon::Realtime::PhotonPing::__cordl_internal_get_PingBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PingBytes;
}
constexpr void Photon::Realtime::PhotonPing::__cordl_internal_set_PingBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PingBytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint8_t& Photon::Realtime::PhotonPing::__cordl_internal_get_PingId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PingId;
}
constexpr uint8_t const& Photon::Realtime::PhotonPing::__cordl_internal_get_PingId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PingId;
}
constexpr void Photon::Realtime::PhotonPing::__cordl_internal_set_PingId(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PingId = value;
}
inline void Photon::Realtime::PhotonPing::setStaticF_RandomIdProvider(::System::Random* value) {
  ::cordl_internals::setStaticField<::System::Random*, "RandomIdProvider", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPing*>::get>(
      std::forward<::System::Random*>(value));
}
inline ::System::Random* Photon::Realtime::PhotonPing::getStaticF_RandomIdProvider() {
  return ::cordl_internals::getStaticField<::System::Random*, "RandomIdProvider", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPing*>::get>();
}
inline bool Photon::Realtime::PhotonPing::StartPing(::StringW ip) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPing*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ip);
}
inline bool Photon::Realtime::PhotonPing::Done() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPing*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Photon::Realtime::PhotonPing::Dispose() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPing*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::PhotonPing::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPing*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Photon::Realtime::PhotonPing* Photon::Realtime::PhotonPing::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::PhotonPing*>());
}
inline void Photon::Realtime::PhotonPing::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPing*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::PhotonPing::PhotonPing() {}
