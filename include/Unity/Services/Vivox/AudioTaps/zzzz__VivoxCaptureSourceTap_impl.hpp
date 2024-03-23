#pragma once
#include "Unity/Services/Vivox/AudioTaps/zzzz__VivoxAudioTap_impl.hpp"
#include "Unity/Services/Vivox/AudioTaps/zzzz__VivoxCaptureSourceTap_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap.get_Identifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap::*)()>(
    &::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap::get_Identifier)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x170cd08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap::*)()>(
    &::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170cd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap.RegisterTap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap::*)(::StringW)>(
    &::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap::RegisterTap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x170cd64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap.DoAudioFilterRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap::*)(
    int32_t, ::ArrayW<float_t, ::Array<float_t>*>, int32_t, int32_t, int32_t)>(&::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap::DoAudioFilterRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170cd74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap*>::get(), 7));
    return ___internal_method;
  }
};
inline ::StringW Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap::get_Identifier() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap* Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap*>());
}
inline void Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap::RegisterTap(::StringW channelUri) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, channelUri);
}
inline int32_t Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap::DoAudioFilterRead(int32_t tapId, ::ArrayW<float_t, ::Array<float_t>*> data, int32_t numFrames, int32_t numChannels,
                                                                                           int32_t sampleRate) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, tapId, data, numFrames, numChannels, sampleRate);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::AudioTaps::VivoxCaptureSourceTap::VivoxCaptureSourceTap() {}
