#pragma once
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateContainer_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry::*)(::StringW, ::StringW)>(
    &::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27b3d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::__VisualTreeAsset__UsingEntry::setStaticF_comparer(::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*, "comparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get>(
      std::forward<::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*>(value));
}
inline ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* UnityEngine::UIElements::__VisualTreeAsset__UsingEntry::getStaticF_comparer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*, "comparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get>();
}
inline void UnityEngine::UIElements::__VisualTreeAsset__UsingEntry::_ctor(::StringW alias, ::StringW path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alias, path);
}
// Ctor Parameters [CppParam { name: "alias", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "asset", ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry::__VisualTreeAsset__UsingEntry(::StringW alias, ::StringW path,
                                                                                                  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> asset) noexcept {
  this->alias = alias;
  this->path = path;
  this->asset = asset;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry::__VisualTreeAsset__UsingEntry() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::*)(
    ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry, ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry)>(&::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::Compare)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27b41f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b41f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>"
constexpr UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*
UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::i___System__Collections__Generic__IComparer_1___UnityEngine__UIElements____VisualTreeAsset__UsingEntry_() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*>(static_cast<void*>(this));
}
inline int32_t UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::Compare(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry x,
                                                                                       ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer* UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer*>());
}
inline void UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::__VisualTreeAsset__UsingEntryComparer() {}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "insertionPointId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition::__VisualTreeAsset__SlotDefinition(::StringW name, int32_t insertionPointId) noexcept {
  this->name = name;
  this->insertionPointId = insertionPointId;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition::__VisualTreeAsset__SlotDefinition() {}
// Ctor Parameters [CppParam { name: "slotName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "assetId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry::__VisualTreeAsset__SlotUsageEntry(::StringW slotName, int32_t assetId) noexcept {
  this->slotName = slotName;
  this->assetId = assetId;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry::__VisualTreeAsset__SlotUsageEntry() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)(int32_t)>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27b1e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27b4208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x27b4234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27b4714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                                 "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::UIElements::VisualTreeAsset> (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
        &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b4764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
        "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualTreeAsset>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27b476c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b47ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.System_Collections_Generic_IEnumerable_UnityEngine_UIElements_VisualTreeAsset__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* (
    ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_VisualTreeAsset__GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x27b47b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
        "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualTreeAsset>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
        &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27b4854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::operator ::System::Collections::Generic::IEnumerable_1<
    ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*
UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__UIElements__VisualTreeAsset__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::operator ::System::Collections::Generic::IEnumerator_1<
    ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*
UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__UIElements__VisualTreeAsset__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_set___2__current(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_set___4__this(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*&
UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get__sent_5__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sent_5__1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*> const&
UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get__sent_5__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sent_5__1;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_set__sent_5__1(
    ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sent_5__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>&
UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get___s__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__2;
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry> const&
UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get___s__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__2;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_set___s__2(
    ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____s__2 = value;
}
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get__entry_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entry_5__3;
}
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry const& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get__entry_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entry_5__3;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_set__entry_5__3(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entry_5__3 = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get__vta_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vta_5__4;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_get__vta_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vta_5__4;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__cordl_internal_set__vta_5__4(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vta_5__4)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17* UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>(__1__state));
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>
UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
      "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualTreeAsset>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*
UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_VisualTreeAsset__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
      "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualTreeAsset>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__VisualTreeAsset___get_templateDependencies_d__17() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)(int32_t)>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27b1efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x27b4858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x27b4944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27b4fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "<>m__Finally1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.__m__Finally2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__m__Finally2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27b4f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "<>m__Finally2",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.__m__Finally3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__m__Finally3)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27b4f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "<>m__Finally3",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::UIElements::StyleSheet> (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
        &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b4ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
        "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.StyleSheet>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27b4ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b5038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StyleSheet__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
        &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StyleSheet__GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x27b5040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
        "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StyleSheet>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27b50e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__UIElements__StyleSheet__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__UIElements__StyleSheet__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_set___2__current(::UnityW<::UnityEngine::UIElements::StyleSheet> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_set___4__this(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*&
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get__sent_5__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sent_5__1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*> const&
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get__sent_5__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sent_5__1;
}
constexpr void
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_set__sent_5__1(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sent_5__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*>&
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get___s__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__2;
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*> const&
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get___s__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__2;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_set___s__2(
    ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____s__2 = value;
}
constexpr ::UnityEngine::UIElements::VisualElementAsset*& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get__vea_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vea_5__3;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElementAsset*> const&
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get__vea_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vea_5__3;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_set__vea_5__3(::UnityEngine::UIElements::VisualElementAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vea_5__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>>&
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get___s__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__4;
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>> const&
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get___s__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__4;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_set___s__4(
    ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____s__4 = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get__stylesheet_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheet_5__5;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get__stylesheet_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheet_5__5;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_set__stylesheet_5__5(::UnityW<::UnityEngine::UIElements::StyleSheet> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stylesheet_5__5)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW>& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get___s__6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__6;
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW> const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get___s__6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__6;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_set___s__6(::System::Collections::Generic::__List_1__Enumerator<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____s__6 = value;
}
constexpr ::StringW& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get__stylesheetPath_5__7() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheetPath_5__7;
}
constexpr ::StringW const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get__stylesheetPath_5__7() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheetPath_5__7;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_set__stylesheetPath_5__7(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stylesheetPath_5__7)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get__stylesheet_5__8() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheet_5__8;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_get__stylesheet_5__8() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheet_5__8;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__cordl_internal_set__stylesheet_5__8(::UnityW<::UnityEngine::UIElements::StyleSheet> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stylesheet_5__8)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21* UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>(__1__state));
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "<>m__Finally2",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__m__Finally3() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "<>m__Finally3",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UIElements::StyleSheet>
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
      "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.StyleSheet>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::StyleSheet>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StyleSheet__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
      "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StyleSheet>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__VisualTreeAsset___get_stylesheets_d__21() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b3abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0._CloneSetupRecursively_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::*)(
    ::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry)>(&::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::_CloneSetupRecursively_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27b50e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0*>::get(), "<CloneSetupRecursively>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElementAsset*& UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::__cordl_internal_get_childVea() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childVea;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElementAsset*> const&
UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::__cordl_internal_get_childVea() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childVea;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::__cordl_internal_set_childVea(::UnityEngine::UIElements::VisualElementAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___childVea)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0* UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0*>());
}
inline void UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::_CloneSetupRecursively_b__0(::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry u) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0*>::get(), "<CloneSetupRecursively>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, u);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::__VisualTreeAsset____c__DisplayClass45_0() {}
// Ctor Parameters [CppParam { name: "asset", ty: "::UnityEngine::UIElements::VisualElementAsset*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0::__VisualTreeAsset____c__DisplayClass49_0(::UnityEngine::UIElements::VisualElementAsset* asset) noexcept {
  this->asset = asset;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0::__VisualTreeAsset____c__DisplayClass49_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_importedWithErrors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::get_importedWithErrors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b1d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_importedWithErrors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_importedWithErrors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(bool)>(
    &::UnityEngine::UIElements::VisualTreeAsset::set_importedWithErrors)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27b1d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_importedWithErrors",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_importedWithWarnings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::get_importedWithWarnings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b1d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_importedWithWarnings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_importedWithWarnings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(bool)>(
    &::UnityEngine::UIElements::VisualTreeAsset::set_importedWithWarnings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27b1d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_importedWithWarnings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.GetNextChildSerialNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::GetNextChildSerialNumber)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27b1d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "GetNextChildSerialNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_templateDependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_templateDependencies)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27b1df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_templateDependencies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_stylesheets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_stylesheets)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27b1e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_stylesheets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_visualElementAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_visualElementAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b1f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_visualElementAssets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_visualElementAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*)>(&::UnityEngine::UIElements::VisualTreeAsset::set_visualElementAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b1f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_visualElementAssets", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_templateAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_templateAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b1f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_templateAssets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_templateAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*)>(&::UnityEngine::UIElements::VisualTreeAsset::set_templateAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b1f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_templateAssets", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_slots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_slots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b1f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "get_slots",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_slots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*)>(&::UnityEngine::UIElements::VisualTreeAsset::set_slots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b1f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_slots", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_contentContainerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::get_contentContainerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b1f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_contentContainerId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_contentContainerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(int32_t)>(
    &::UnityEngine::UIElements::VisualTreeAsset::set_contentContainerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b1f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_contentContainerId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TemplateContainer* (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::Instantiate)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x27b1f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "Instantiate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TemplateContainer* (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW)>(
    &::UnityEngine::UIElements::VisualTreeAsset::Instantiate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27b2780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TemplateContainer* (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::CloneTree)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27b27a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TemplateContainer* (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW)>(
    &::UnityEngine::UIElements::VisualTreeAsset::CloneTree)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27b27a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::CloneTree)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27b27c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(
    ::UnityEngine::UIElements::VisualElement*, ByRef<int32_t>, ByRef<int32_t>)>(&::UnityEngine::UIElements::VisualTreeAsset::CloneTree)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x27b27e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*)>(&::UnityEngine::UIElements::VisualTreeAsset::CloneTree)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x27b2100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneSetupRecursively
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualElementAsset*,
                                                   ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>*,
                                                   ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::VisualTreeAsset::CloneSetupRecursively)> {
  constexpr static std::size_t size = 0x848;
  constexpr static std::size_t addrs = 0x27b2bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneSetupRecursively", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CompareForOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::VisualElementAsset*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::CompareForOrder)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27b3ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CompareForOrder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.TryGetSlotInsertionPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)(int32_t, ByRef<::StringW>)>(
    &::UnityEngine::UIElements::VisualTreeAsset::TryGetSlotInsertionPoint)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x27b3a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "TryGetSlotInsertionPoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.ResolveTemplate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::UIElements::VisualTreeAsset> (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW)>(
    &::UnityEngine::UIElements::VisualTreeAsset::ResolveTemplate)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x27b3b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "ResolveTemplate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::VisualTreeAsset::Create)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x27b3444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.AssignClassListFromAssetToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::AssignClassListFromAssetToElement)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27b29c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "AssignClassListFromAssetToElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.AssignStyleSheetFromAssetToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::AssignStyleSheetFromAssetToElement)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x27b2a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "AssignStyleSheetFromAssetToElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_contentHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::get_contentHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b40a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_contentHash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_contentHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(int32_t)>(
    &::UnityEngine::UIElements::VisualTreeAsset::set_contentHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b40b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_contentHash",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b40b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset._Create_g__CreateError_49_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::VisualElement* (*)(ByRef<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0>)>(
        &::UnityEngine::UIElements::VisualTreeAsset::_Create_g__CreateError_49_0)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x27b3d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "<Create>g__CreateError|49_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0>>::get() })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ImportedWithErrors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithErrors;
}
constexpr bool const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ImportedWithErrors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithErrors;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_ImportedWithErrors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ImportedWithErrors = value;
}
constexpr bool& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ImportedWithWarnings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithWarnings;
}
constexpr bool const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ImportedWithWarnings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithWarnings;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_ImportedWithWarnings(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ImportedWithWarnings = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_Usings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Usings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*> const&
UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_Usings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Usings;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_Usings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Usings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_inlineSheet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inlineSheet;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_inlineSheet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inlineSheet;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_inlineSheet(::UnityW<::UnityEngine::UIElements::StyleSheet> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inlineSheet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_VisualElementAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualElementAssets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*> const&
UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_VisualElementAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualElementAssets;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_VisualElementAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VisualElementAssets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_TemplateAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemplateAssets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*> const&
UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_TemplateAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemplateAssets;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_TemplateAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TemplateAssets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_Slots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Slots;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*> const&
UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_Slots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Slots;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_Slots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Slots)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ContentContainerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainerId;
}
constexpr int32_t const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ContentContainerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainerId;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_ContentContainerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentContainerId = value;
}
constexpr int32_t& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ContentHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentHash;
}
constexpr int32_t const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ContentHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentHash;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_ContentHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentHash = value;
}
inline void UnityEngine::UIElements::VisualTreeAsset::setStaticF_LinkedVEAInTemplatePropertyName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "LinkedVEAInTemplatePropertyName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::VisualTreeAsset::getStaticF_LinkedVEAInTemplatePropertyName() {
  return ::cordl_internals::getStaticField<::StringW, "LinkedVEAInTemplatePropertyName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get>();
}
inline void
UnityEngine::UIElements::VisualTreeAsset::setStaticF_s_TemporarySlotInsertionPoints(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*, "s_TemporarySlotInsertionPoints",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::VisualTreeAsset::getStaticF_s_TemporarySlotInsertionPoints() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*, "s_TemporarySlotInsertionPoints",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get>();
}
inline bool UnityEngine::UIElements::VisualTreeAsset::get_importedWithErrors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_importedWithErrors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_importedWithErrors(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_importedWithErrors",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::VisualTreeAsset::get_importedWithWarnings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_importedWithWarnings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_importedWithWarnings(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_importedWithWarnings",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::VisualTreeAsset::GetNextChildSerialNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "GetNextChildSerialNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* UnityEngine::UIElements::VisualTreeAsset::get_templateDependencies() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_templateDependencies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* UnityEngine::UIElements::VisualTreeAsset::get_stylesheets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_stylesheets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* UnityEngine::UIElements::VisualTreeAsset::get_visualElementAssets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_visualElementAssets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_visualElementAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_visualElementAssets", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* UnityEngine::UIElements::VisualTreeAsset::get_templateAssets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_templateAssets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_templateAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_templateAssets", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* UnityEngine::UIElements::VisualTreeAsset::get_slots() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "get_slots",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_slots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_slots", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::VisualTreeAsset::get_contentContainerId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_contentContainerId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_contentContainerId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_contentContainerId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::TemplateContainer* UnityEngine::UIElements::VisualTreeAsset::Instantiate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "Instantiate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TemplateContainer*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TemplateContainer* UnityEngine::UIElements::VisualTreeAsset::Instantiate(::StringW bindingPath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TemplateContainer*, false>(this, ___internal_method, bindingPath);
}
inline ::UnityEngine::UIElements::TemplateContainer* UnityEngine::UIElements::VisualTreeAsset::CloneTree() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TemplateContainer*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TemplateContainer* UnityEngine::UIElements::VisualTreeAsset::CloneTree(::StringW bindingPath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TemplateContainer*, false>(this, ___internal_method, bindingPath);
}
inline void UnityEngine::UIElements::VisualTreeAsset::CloneTree(::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline void UnityEngine::UIElements::VisualTreeAsset::CloneTree(::UnityEngine::UIElements::VisualElement* target, ByRef<int32_t> firstElementIndex, ByRef<int32_t> elementAddedCount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, firstElementIndex, elementAddedCount);
}
inline void UnityEngine::UIElements::VisualTreeAsset::CloneTree(::UnityEngine::UIElements::VisualElement* target,
                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* attributeOverrides) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, slotInsertionPoints, attributeOverrides);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::VisualTreeAsset::CloneSetupRecursively(
    ::UnityEngine::UIElements::VisualElementAsset* root,
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>* idToChildren,
    ::UnityEngine::UIElements::CreationContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneSetupRecursively", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method, root, idToChildren, context);
}
inline int32_t UnityEngine::UIElements::VisualTreeAsset::CompareForOrder(::UnityEngine::UIElements::VisualElementAsset* a, ::UnityEngine::UIElements::VisualElementAsset* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CompareForOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::UIElements::VisualTreeAsset::TryGetSlotInsertionPoint(int32_t insertionPointId, ByRef<::StringW> slotName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "TryGetSlotInsertionPoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, insertionPointId, slotName);
}
inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> UnityEngine::UIElements::VisualTreeAsset::ResolveTemplate(::StringW templateName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "ResolveTemplate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>, false>(this, ___internal_method, templateName);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::VisualTreeAsset::Create(::UnityEngine::UIElements::VisualElementAsset* asset,
                                                                                                  ::UnityEngine::UIElements::CreationContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(nullptr, ___internal_method, asset, ctx);
}
inline void UnityEngine::UIElements::VisualTreeAsset::AssignClassListFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "AssignClassListFromAssetToElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset, element);
}
inline void UnityEngine::UIElements::VisualTreeAsset::AssignStyleSheetFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "AssignStyleSheetFromAssetToElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset, element);
}
inline int32_t UnityEngine::UIElements::VisualTreeAsset::get_contentHash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_contentHash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_contentHash(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_contentHash",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualTreeAsset* UnityEngine::UIElements::VisualTreeAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::VisualTreeAsset*>());
}
inline void UnityEngine::UIElements::VisualTreeAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement*
UnityEngine::UIElements::VisualTreeAsset::_Create_g__CreateError_49_0(ByRef<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "<Create>g__CreateError|49_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeAsset::VisualTreeAsset() {}
