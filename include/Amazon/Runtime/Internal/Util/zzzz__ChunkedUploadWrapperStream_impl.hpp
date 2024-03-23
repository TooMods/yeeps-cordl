#pragma once
#include "Amazon/Runtime/Internal/Util/zzzz__ChunkedUploadWrapperStream_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__WrapperStream_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__ChunkedUploadWrapperStream_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__AWS4SigningResult_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__ChunkedUploadWrapperStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy::__ChunkedUploadWrapperStream__ReadStrategy(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy::__ChunkedUploadWrapperStream__ReadStrategy() {}
constexpr ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy::ReadDirect{ static_cast<int32_t>(
    0x0) };
constexpr ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy::ReadAndCopy{ static_cast<int32_t>(
    0x1) };
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c::*)()>(
    &::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f3894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c.__ctor_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c::*)(::System::IO::Stream*)>(
    &::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c::__ctor_b__14_0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23f389c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c*>::get(), "<.ctor>b__14_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c::setStaticF___9(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c*>::get>(
      std::forward<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c*>(value));
}
inline ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c* Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c*>::get>();
}
inline void Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c::setStaticF___9__14_0(::System::Func_2<::System::IO::Stream*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::IO::Stream*, bool>*, "<>9__14_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c*>::get>(
      std::forward<::System::Func_2<::System::IO::Stream*, bool>*>(value));
}
inline ::System::Func_2<::System::IO::Stream*, bool>* Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::IO::Stream*, bool>*, "<>9__14_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c*>::get>();
}
inline ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c* Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c*>());
}
inline void Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c::__ctor_b__14_0(::System::IO::Stream* s) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c*>::get(), "<.ctor>b__14_0",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c::__ChunkedUploadWrapperStream____c() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17::*)()>(
    &::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x23f3954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f3ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "offset", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17::__ChunkedUploadWrapperStream___ReadAsync_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->buffer = buffer;
  this->offset = offset;
  this->count = count;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17::__ChunkedUploadWrapperStream___ReadAsync_d__17() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18::*)()>(
    &::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x23f3bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23f4030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_inputBufferPos_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_readBuffer_5__3", ty:
// "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream* __4__this,
    ::System::Threading::CancellationToken cancellationToken, int32_t _inputBufferPos_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1,
    ::ArrayW<uint8_t, ::Array<uint8_t>*> _readBuffer_5__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_inputBufferPos_5__2 = _inputBufferPos_5__2;
  this->__u__1 = __u__1;
  this->_readBuffer_5__3 = _readBuffer_5__3;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::*)(
    ::System::IO::Stream*, int32_t, ::Amazon::Runtime::Internal::Auth::AWS4SigningResult*)>(&::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x23f26f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AWS4SigningResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::Read)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x23f2994;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream.AdjustBufferAfterReading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, int32_t)>(&::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::AdjustBufferAfterReading)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23f2b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "AdjustBufferAfterReading",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream.ReadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(
    &::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::ReadAsync)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x23f336c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream.FillInputBufferAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::*)(::System::Threading::CancellationToken)>(&::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::FillInputBufferAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x23f34bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "FillInputBufferAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream.get_HeaderSigningResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::AWS4SigningResult* (
    ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::*)()>(&::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::get_HeaderSigningResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f35e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(),
                                                 "get_HeaderSigningResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream.set_HeaderSigningResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::*)(
    ::Amazon::Runtime::Internal::Auth::AWS4SigningResult*)>(&::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::set_HeaderSigningResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f35f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "set_HeaderSigningResult",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AWS4SigningResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream.get_PreviousChunkSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::*)()>(
    &::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::get_PreviousChunkSignature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f35f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(),
                                                 "get_PreviousChunkSignature", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream.set_PreviousChunkSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::*)(::StringW)>(
    &::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::set_PreviousChunkSignature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f3600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "set_PreviousChunkSignature",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream.ConstructOutputBufferChunk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::*)(int32_t)>(
    &::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::ConstructOutputBufferChunk)> {
  constexpr static std::size_t size = 0x73c;
  constexpr static std::size_t addrs = 0x23f2c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "ConstructOutputBufferChunk",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::*)()>(
    &::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::get_Length)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23f3608;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::*)()>(
    &::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f37c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream.ComputeChunkedContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int64_t)>(&::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::ComputeChunkedContentLength)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x23f3684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "ComputeChunkedContentLength",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream.CalculateChunkHeaderLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int64_t)>(&::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::CalculateChunkHeaderLength)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x23f28b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "CalculateChunkHeaderLength",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream.FillInputBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::*)()>(
    &::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::FillInputBuffer)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x23f2a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "FillInputBuffer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream.get_HasLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::*)()>(
    &::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::get_HasLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23f37d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), 40));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__inputBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__inputBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputBuffer;
}
constexpr void Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_set__inputBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__outputBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__outputBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputBuffer;
}
constexpr void Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_set__outputBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outputBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__outputBufferPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputBufferPos;
}
constexpr int32_t const& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__outputBufferPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputBufferPos;
}
constexpr void Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_set__outputBufferPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outputBufferPos = value;
}
constexpr int32_t& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__outputBufferDataLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputBufferDataLen;
}
constexpr int32_t const& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__outputBufferDataLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputBufferDataLen;
}
constexpr void Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_set__outputBufferDataLen(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outputBufferDataLen = value;
}
constexpr int32_t& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__wrappedStreamBufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrappedStreamBufferSize;
}
constexpr int32_t const& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__wrappedStreamBufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrappedStreamBufferSize;
}
constexpr void Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_set__wrappedStreamBufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wrappedStreamBufferSize = value;
}
constexpr bool& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__wrappedStreamConsumed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrappedStreamConsumed;
}
constexpr bool const& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__wrappedStreamConsumed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrappedStreamConsumed;
}
constexpr void Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_set__wrappedStreamConsumed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wrappedStreamConsumed = value;
}
constexpr bool& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__outputBufferIsTerminatingChunk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputBufferIsTerminatingChunk;
}
constexpr bool const& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__outputBufferIsTerminatingChunk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputBufferIsTerminatingChunk;
}
constexpr void Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_set__outputBufferIsTerminatingChunk(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outputBufferIsTerminatingChunk = value;
}
constexpr ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__readStrategy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readStrategy;
}
constexpr ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy const& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__readStrategy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readStrategy;
}
constexpr void Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_set__readStrategy(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readStrategy = value;
}
constexpr ::Amazon::Runtime::Internal::Auth::AWS4SigningResult*& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__HeaderSigningResult_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HeaderSigningResult_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Auth::AWS4SigningResult*> const&
Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__HeaderSigningResult_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HeaderSigningResult_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_set__HeaderSigningResult_k__BackingField(::Amazon::Runtime::Internal::Auth::AWS4SigningResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____HeaderSigningResult_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__PreviousChunkSignature_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PreviousChunkSignature_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_get__PreviousChunkSignature_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PreviousChunkSignature_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::__cordl_internal_set__PreviousChunkSignature_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PreviousChunkSignature_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::setStaticF_DefaultChunkSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "DefaultChunkSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::getStaticF_DefaultChunkSize() {
  return ::cordl_internals::getStaticField<int32_t, "DefaultChunkSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get>();
}
inline ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*
Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::New_ctor(::System::IO::Stream* stream, int32_t wrappedStreamBufferSize,
                                                                      ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* headerSigningResult) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>(stream, wrappedStreamBufferSize, headerSigningResult));
}
inline void Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::_ctor(::System::IO::Stream* stream, int32_t wrappedStreamBufferSize,
                                                                               ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* headerSigningResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AWS4SigningResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, wrappedStreamBufferSize, headerSigningResult);
}
inline int32_t Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline int32_t Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::AdjustBufferAfterReading(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, int32_t bytesRead) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "AdjustBufferAfterReading",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count, bytesRead);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                                                                           ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::FillInputBufferAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "FillInputBufferAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, cancellationToken);
}
inline ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::get_HeaderSigningResult() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "get_HeaderSigningResult",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::AWS4SigningResult*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::set_HeaderSigningResult(::Amazon::Runtime::Internal::Auth::AWS4SigningResult* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "set_HeaderSigningResult",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AWS4SigningResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::get_PreviousChunkSignature() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(),
                                               "get_PreviousChunkSignature", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::set_PreviousChunkSignature(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "set_PreviousChunkSignature",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::ConstructOutputBufferChunk(int32_t dataLen) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "ConstructOutputBufferChunk",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataLen);
}
inline int64_t Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::get_Length() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::get_CanSeek() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::ComputeChunkedContentLength(int64_t originalLength) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "ComputeChunkedContentLength",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, originalLength);
}
inline int64_t Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::CalculateChunkHeaderLength(int64_t chunkDataSize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "CalculateChunkHeaderLength",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, chunkDataSize);
}
inline int32_t Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::FillInputBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), "FillInputBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::get_HasLength() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream::ChunkedUploadWrapperStream() {}
