#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__RuntimePipelineCustomizerRegistry_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Logger_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRuntimePipelineCustomizer_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__RuntimePipelineCustomizerRegistry_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__RuntimePipeline_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0::*)()>(
    &::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23daa28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0._Register_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0::*)(
    ::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*)>(&::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0::_Register_b__0)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x23db534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0*>::get(),
                                    "<Register>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*& Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0::__cordl_internal_get_customizer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customizer;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*> const&
Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0::__cordl_internal_get_customizer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customizer;
}
constexpr void Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0::__cordl_internal_set_customizer(::Amazon::Runtime::Internal::IRuntimePipelineCustomizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customizer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0* Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0*>());
}
inline void Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0::_Register_b__0(::Amazon::Runtime::Internal::IRuntimePipelineCustomizer* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0*>::get(),
                                  "<Register>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0::__RuntimePipelineCustomizerRegistry____c__DisplayClass7_0() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry* (*)()>(
    &::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23da480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), "get_Instance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::*)()>(
    &::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x23da4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::*)(
    ::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*)>(&::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::Register)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x23da610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry.Deregister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::*)(
    ::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*)>(&::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::Deregister)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23daa30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), "Deregister", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry.Deregister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::*)(::StringW)>(
    &::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::Deregister)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x23daadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), "Deregister",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry.ApplyCustomizations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::*)(
    ::System::Type*, ::Amazon::Runtime::Internal::RuntimePipeline*)>(&::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::ApplyCustomizations)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x23daf14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), "ApplyCustomizations", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RuntimePipeline*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::*)()>(
    &::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x23db440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::*)(bool)>(
    &::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23db4ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), 5));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::Amazon::Runtime::Internal::Util::Logger*& Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::__cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ReaderWriterLockSlim*& Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::__cordl_internal_get__rwlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rwlock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::__cordl_internal_get__rwlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rwlock;
}
constexpr void Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::__cordl_internal_set__rwlock(::System::Threading::ReaderWriterLockSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rwlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>*&
Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::__cordl_internal_get__customizers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customizers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>*> const&
Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::__cordl_internal_get__customizers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customizers;
}
constexpr void Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::__cordl_internal_set__customizers(
    ::System::Collections::Generic::IList_1<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customizers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::setStaticF__Instance_k__BackingField(::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*, "<Instance>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get>(
      std::forward<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>(value));
}
inline ::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry* Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::getStaticF__Instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*, "<Instance>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get>();
}
inline ::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry* Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::get_Instance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), "get_Instance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry* Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>());
}
inline void Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::Register(::Amazon::Runtime::Internal::IRuntimePipelineCustomizer* customizer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, customizer);
}
inline void Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::Deregister(::Amazon::Runtime::Internal::IRuntimePipelineCustomizer* customizer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), "Deregister", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRuntimePipelineCustomizer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, customizer);
}
inline void Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::Deregister(::StringW uniqueName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), "Deregister",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uniqueName);
}
inline void Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::ApplyCustomizations(::System::Type* type, ::Amazon::Runtime::Internal::RuntimePipeline* pipeline) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), "ApplyCustomizations", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RuntimePipeline*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, pipeline);
}
inline void Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::RuntimePipelineCustomizerRegistry::RuntimePipelineCustomizerRegistry() {}
