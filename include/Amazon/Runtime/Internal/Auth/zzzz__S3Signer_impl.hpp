#pragma once
#include "Amazon/Runtime/Internal/Auth/zzzz__AbstractAWSSigner_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__S3Signer_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__ClientProtocol_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__S3Signer_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__RequestMetrics_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater::*)(::System::Object*, void*)>(
    &::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x25e8d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater::*)(
    ::Amazon::Runtime::Internal::IRequest*)>(&::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25e8ec4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater::*)(::Amazon::Runtime::Internal::IRequest*, ::System::AsyncCallback*, ::System::Object*)>(
    &::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25e8ed8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater::*)(::System::IAsyncResult*)>(
    &::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25e8ef8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*>::get(), 15));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater* Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*>(object, method));
}
inline void Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater::Invoke(::Amazon::Runtime::Internal::IRequest* request) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline ::System::IAsyncResult* Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater::BeginInvoke(::Amazon::Runtime::Internal::IRequest* request, ::System::AsyncCallback* callback,
                                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, request, callback, object);
}
inline void Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater::__S3Signer__RegionDetectionUpdater() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::__S3Signer____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Auth::__S3Signer____c::*)()>(
    &::Amazon::Runtime::Internal::Auth::__S3Signer____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e8f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::__S3Signer____c._BuildCanonicalizedHeaders_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Auth::__S3Signer____c::*)(::StringW)>(
    &::Amazon::Runtime::Internal::Auth::__S3Signer____c::_BuildCanonicalizedHeaders_b__10_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25e8f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer____c*>::get(), "<BuildCanonicalizedHeaders>b__10_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::__S3Signer____c._BuildCanonicalizedResource_b__13_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::Auth::__S3Signer____c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>)>(
    &::Amazon::Runtime::Internal::Auth::__S3Signer____c::_BuildCanonicalizedResource_b__13_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x25e8f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer____c*>::get(), "<BuildCanonicalizedResource>b__13_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::Internal::Auth::__S3Signer____c::setStaticF___9(::Amazon::Runtime::Internal::Auth::__S3Signer____c* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::Auth::__S3Signer____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer____c*>::get>(
      std::forward<::Amazon::Runtime::Internal::Auth::__S3Signer____c*>(value));
}
inline ::Amazon::Runtime::Internal::Auth::__S3Signer____c* Amazon::Runtime::Internal::Auth::__S3Signer____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::Auth::__S3Signer____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer____c*>::get>();
}
inline void Amazon::Runtime::Internal::Auth::__S3Signer____c::setStaticF___9__10_0(::System::Func_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__10_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer____c*>::get>(
      std::forward<::System::Func_2<::StringW, ::StringW>*>(value));
}
inline ::System::Func_2<::StringW, ::StringW>* Amazon::Runtime::Internal::Auth::__S3Signer____c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__10_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer____c*>::get>();
}
inline void Amazon::Runtime::Internal::Auth::__S3Signer____c::setStaticF___9__13_0(::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*, "<>9__13_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer____c*>::get>(
      std::forward<::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*>(value));
}
inline ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* Amazon::Runtime::Internal::Auth::__S3Signer____c::getStaticF___9__13_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*, "<>9__13_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer____c*>::get>();
}
inline ::Amazon::Runtime::Internal::Auth::__S3Signer____c* Amazon::Runtime::Internal::Auth::__S3Signer____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Auth::__S3Signer____c*>());
}
inline void Amazon::Runtime::Internal::Auth::__S3Signer____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::Internal::Auth::__S3Signer____c::_BuildCanonicalizedHeaders_b__10_0(::StringW x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer____c*>::get(), "<BuildCanonicalizedHeaders>b__10_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline int32_t Amazon::Runtime::Internal::Auth::__S3Signer____c::_BuildCanonicalizedResource_b__13_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> firstPair,
                                                                                                     ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> nextPair) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::__S3Signer____c*>::get(), "<BuildCanonicalizedResource>b__13_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, firstPair, nextPair);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Auth::__S3Signer____c::__S3Signer____c() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::S3Signer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Auth::S3Signer::*)()>(&::Amazon::Runtime::Internal::Auth::S3Signer::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25e6360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::S3Signer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Auth::S3Signer::*)(
    bool, ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*)>(&::Amazon::Runtime::Internal::Auth::S3Signer::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x25e6384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::S3Signer.get_Protocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::ClientProtocol (::Amazon::Runtime::Internal::Auth::S3Signer::*)()>(
    &::Amazon::Runtime::Internal::Auth::S3Signer::get_Protocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e63b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::S3Signer.Sign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Auth::S3Signer::*)(
    ::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::IClientConfig*, ::Amazon::Runtime::Internal::Util::RequestMetrics*, ::StringW, ::StringW)>(
    &::Amazon::Runtime::Internal::Auth::S3Signer::Sign)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x25e63bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::S3Signer.SignRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::Internal::Util::RequestMetrics*, ::StringW,
                                                                                           ::StringW)>(&::Amazon::Runtime::Internal::Auth::S3Signer::SignRequest)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x25e66e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), "SignRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::S3Signer.BuildStringToSign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Amazon::Runtime::Internal::IRequest*)>(
    &::Amazon::Runtime::Internal::Auth::S3Signer::BuildStringToSign)> {
  constexpr static std::size_t size = 0xaec;
  constexpr static std::size_t addrs = 0x25e6ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), "BuildStringToSign", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::S3Signer.BuildCanonicalizedHeaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(
    &::Amazon::Runtime::Internal::Auth::S3Signer::BuildCanonicalizedHeaders)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x25e75b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), "BuildCanonicalizedHeaders", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::S3Signer.BuildCanonicalizedResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Amazon::Runtime::Internal::IRequest*)>(
    &::Amazon::Runtime::Internal::Auth::S3Signer::BuildCanonicalizedResource)> {
  constexpr static std::size_t size = 0xe20;
  constexpr static std::size_t addrs = 0x25e7c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), "BuildCanonicalizedResource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Amazon::Runtime::Internal::Auth::S3Signer::__cordl_internal_get__useSigV4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useSigV4;
}
constexpr bool const& Amazon::Runtime::Internal::Auth::S3Signer::__cordl_internal_get__useSigV4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useSigV4;
}
constexpr void Amazon::Runtime::Internal::Auth::S3Signer::__cordl_internal_set__useSigV4(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useSigV4 = value;
}
constexpr ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*& Amazon::Runtime::Internal::Auth::S3Signer::__cordl_internal_get__regionDetector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionDetector;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*> const&
Amazon::Runtime::Internal::Auth::S3Signer::__cordl_internal_get__regionDetector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionDetector;
}
constexpr void Amazon::Runtime::Internal::Auth::S3Signer::__cordl_internal_set__regionDetector(::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____regionDetector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::Internal::Auth::S3Signer::setStaticF_SignableParameters(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "SignableParameters",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::Runtime::Internal::Auth::S3Signer::getStaticF_SignableParameters() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "SignableParameters",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get>();
}
inline void Amazon::Runtime::Internal::Auth::S3Signer::setStaticF_SubResourcesSigningExclusion(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "SubResourcesSigningExclusion",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::Runtime::Internal::Auth::S3Signer::getStaticF_SubResourcesSigningExclusion() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "SubResourcesSigningExclusion",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get>();
}
inline ::Amazon::Runtime::Internal::Auth::S3Signer* Amazon::Runtime::Internal::Auth::S3Signer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Auth::S3Signer*>());
}
inline void Amazon::Runtime::Internal::Auth::S3Signer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Auth::S3Signer* Amazon::Runtime::Internal::Auth::S3Signer::New_ctor(bool useSigV4,
                                                                                                        ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater* regionDetector) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Auth::S3Signer*>(useSigV4, regionDetector));
}
inline void Amazon::Runtime::Internal::Auth::S3Signer::_ctor(bool useSigV4, ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater* regionDetector) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useSigV4, regionDetector);
}
inline ::Amazon::Runtime::Internal::Auth::ClientProtocol Amazon::Runtime::Internal::Auth::S3Signer::get_Protocol() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::ClientProtocol, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Auth::S3Signer::Sign(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* clientConfig,
                                                            ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId, ::StringW awsSecretAccessKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, clientConfig, metrics, awsAccessKeyId, awsSecretAccessKey);
}
inline void Amazon::Runtime::Internal::Auth::S3Signer::SignRequest(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId,
                                                                   ::StringW awsSecretAccessKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), "SignRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, request, metrics, awsAccessKeyId, awsSecretAccessKey);
}
inline ::StringW Amazon::Runtime::Internal::Auth::S3Signer::BuildStringToSign(::Amazon::Runtime::Internal::IRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), "BuildStringToSign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, request);
}
inline ::StringW Amazon::Runtime::Internal::Auth::S3Signer::BuildCanonicalizedHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), "BuildCanonicalizedHeaders", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, headers);
}
inline ::StringW Amazon::Runtime::Internal::Auth::S3Signer::BuildCanonicalizedResource(::Amazon::Runtime::Internal::IRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::S3Signer*>::get(), "BuildCanonicalizedResource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, request);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Auth::S3Signer::S3Signer() {}
