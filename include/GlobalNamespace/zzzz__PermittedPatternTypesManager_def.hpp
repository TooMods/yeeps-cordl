#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PermittedPatternTypesManager)
namespace GlobalNamespace {
struct __Pattern__Type;
}
namespace GlobalNamespace {
class __PermittedPatternTypesManager__OnCosmeticsModeUpdated;
}
namespace GlobalNamespace {
class __PermittedPatternTypesManager__OnDressingRoomModeUpdated;
}
namespace GlobalNamespace {
class __PermittedPatternTypesManager__OnPermittedPatternsUpdated;
}
namespace GlobalNamespace {
class __PermittedPatternTypesManager__OnTechWebModeUpdated;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class PermittedPatternTypesManager;
}
namespace GlobalNamespace {
class __PermittedPatternTypesManager__OnCosmeticsModeUpdated;
}
namespace GlobalNamespace {
class __PermittedPatternTypesManager__OnDressingRoomModeUpdated;
}
namespace GlobalNamespace {
class __PermittedPatternTypesManager__OnPermittedPatternsUpdated;
}
namespace GlobalNamespace {
class __PermittedPatternTypesManager__OnTechWebModeUpdated;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PermittedPatternTypesManager);
MARK_REF_PTR_T(::GlobalNamespace::__PermittedPatternTypesManager__OnCosmeticsModeUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__PermittedPatternTypesManager__OnDressingRoomModeUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__PermittedPatternTypesManager__OnPermittedPatternsUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__PermittedPatternTypesManager__OnTechWebModeUpdated);
// Type: ::OnPermittedPatternsUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PermittedPatternTypesManager::OnPermittedPatternsUpdated*
class CORDL_TYPE __PermittedPatternTypesManager__OnPermittedPatternsUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf4405c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* permittedPatterns, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf4407c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf44048, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* permittedPatterns);

  static inline ::GlobalNamespace::__PermittedPatternTypesManager__OnPermittedPatternsUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf43f1c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PermittedPatternTypesManager__OnPermittedPatternsUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PermittedPatternTypesManager__OnPermittedPatternsUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PermittedPatternTypesManager__OnPermittedPatternsUpdated(__PermittedPatternTypesManager__OnPermittedPatternsUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PermittedPatternTypesManager__OnPermittedPatternsUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PermittedPatternTypesManager__OnPermittedPatternsUpdated(__PermittedPatternTypesManager__OnPermittedPatternsUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PermittedPatternTypesManager__OnPermittedPatternsUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnCosmeticsModeUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PermittedPatternTypesManager::OnCosmeticsModeUpdated*
class CORDL_TYPE __PermittedPatternTypesManager__OnCosmeticsModeUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf44164, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool inCosmeticsMode, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf441ec, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf4414c, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool inCosmeticsMode);

  static inline ::GlobalNamespace::__PermittedPatternTypesManager__OnCosmeticsModeUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf44088, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PermittedPatternTypesManager__OnCosmeticsModeUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PermittedPatternTypesManager__OnCosmeticsModeUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PermittedPatternTypesManager__OnCosmeticsModeUpdated(__PermittedPatternTypesManager__OnCosmeticsModeUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PermittedPatternTypesManager__OnCosmeticsModeUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PermittedPatternTypesManager__OnCosmeticsModeUpdated(__PermittedPatternTypesManager__OnCosmeticsModeUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PermittedPatternTypesManager__OnCosmeticsModeUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnDressingRoomModeUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PermittedPatternTypesManager::OnDressingRoomModeUpdated*
class CORDL_TYPE __PermittedPatternTypesManager__OnDressingRoomModeUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf442d4, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool inDressingRoomMode, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf4435c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf442bc, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool inDressingRoomMode);

  static inline ::GlobalNamespace::__PermittedPatternTypesManager__OnDressingRoomModeUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf441f8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PermittedPatternTypesManager__OnDressingRoomModeUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PermittedPatternTypesManager__OnDressingRoomModeUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PermittedPatternTypesManager__OnDressingRoomModeUpdated(__PermittedPatternTypesManager__OnDressingRoomModeUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PermittedPatternTypesManager__OnDressingRoomModeUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PermittedPatternTypesManager__OnDressingRoomModeUpdated(__PermittedPatternTypesManager__OnDressingRoomModeUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PermittedPatternTypesManager__OnDressingRoomModeUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnTechWebModeUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PermittedPatternTypesManager::OnTechWebModeUpdated*
class CORDL_TYPE __PermittedPatternTypesManager__OnTechWebModeUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf44444, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool inTechWebMode, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf444cc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf4442c, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool inTechWebMode);

  static inline ::GlobalNamespace::__PermittedPatternTypesManager__OnTechWebModeUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf44368, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PermittedPatternTypesManager__OnTechWebModeUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PermittedPatternTypesManager__OnTechWebModeUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PermittedPatternTypesManager__OnTechWebModeUpdated(__PermittedPatternTypesManager__OnTechWebModeUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PermittedPatternTypesManager__OnTechWebModeUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PermittedPatternTypesManager__OnTechWebModeUpdated(__PermittedPatternTypesManager__OnTechWebModeUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PermittedPatternTypesManager__OnTechWebModeUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PermittedPatternTypesManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PermittedPatternTypesManager*
class CORDL_TYPE PermittedPatternTypesManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::PermittedPatternTypesManager>> {
public:
  // Declarations
  using OnCosmeticsModeUpdated = ::GlobalNamespace::__PermittedPatternTypesManager__OnCosmeticsModeUpdated;

  using OnDressingRoomModeUpdated = ::GlobalNamespace::__PermittedPatternTypesManager__OnDressingRoomModeUpdated;

  using OnPermittedPatternsUpdated = ::GlobalNamespace::__PermittedPatternTypesManager__OnPermittedPatternsUpdated;

  using OnTechWebModeUpdated = ::GlobalNamespace::__PermittedPatternTypesManager__OnTechWebModeUpdated;

  /// @brief Field <disableAll>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__disableAll_k__BackingField, put = setStaticF__disableAll_k__BackingField)) bool _disableAll_k__BackingField;

  /// @brief Field <hasTutorialLock>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__hasTutorialLock_k__BackingField, put = setStaticF__hasTutorialLock_k__BackingField)) bool _hasTutorialLock_k__BackingField;

  /// @brief Field <inCosmeticsMode>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__inCosmeticsMode_k__BackingField, put = setStaticF__inCosmeticsMode_k__BackingField)) bool _inCosmeticsMode_k__BackingField;

  /// @brief Field <inDressingRoomMode>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__inDressingRoomMode_k__BackingField, put = setStaticF__inDressingRoomMode_k__BackingField)) bool _inDressingRoomMode_k__BackingField;

  /// @brief Field <inTechWebMode>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__inTechWebMode_k__BackingField, put = setStaticF__inTechWebMode_k__BackingField)) bool _inTechWebMode_k__BackingField;

  /// @brief Field <targetCosmeticsMode>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__targetCosmeticsMode_k__BackingField, put = setStaticF__targetCosmeticsMode_k__BackingField)) bool _targetCosmeticsMode_k__BackingField;

  /// @brief Field <targetDressingRoomMode>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__targetDressingRoomMode_k__BackingField, put = setStaticF__targetDressingRoomMode_k__BackingField)) bool _targetDressingRoomMode_k__BackingField;

  /// @brief Field <targetTechWebMode>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__targetTechWebMode_k__BackingField, put = setStaticF__targetTechWebMode_k__BackingField)) bool _targetTechWebMode_k__BackingField;

  /// @brief Field enterCosmeticsModeTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_enterCosmeticsModeTime, put = setStaticF_enterCosmeticsModeTime)) float_t enterCosmeticsModeTime;

  /// @brief Field enterDressingRoomModeTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_enterDressingRoomModeTime, put = setStaticF_enterDressingRoomModeTime)) float_t enterDressingRoomModeTime;

  /// @brief Field enterTechWebModeTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_enterTechWebModeTime, put = setStaticF_enterTechWebModeTime)) float_t enterTechWebModeTime;

  /// @brief Field isInitialized, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isInitialized, put = __cordl_internal_set_isInitialized)) bool isInitialized;

  /// @brief Field isWaitingToEnterCosmeticsMode, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isWaitingToEnterCosmeticsMode, put = setStaticF_isWaitingToEnterCosmeticsMode)) bool isWaitingToEnterCosmeticsMode;

  /// @brief Field isWaitingToEnterDressingRoomMode, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isWaitingToEnterDressingRoomMode, put = setStaticF_isWaitingToEnterDressingRoomMode)) bool isWaitingToEnterDressingRoomMode;

  /// @brief Field isWaitingToEnterTechWebMode, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isWaitingToEnterTechWebMode, put = setStaticF_isWaitingToEnterTechWebMode)) bool isWaitingToEnterTechWebMode;

  /// @brief Field onCosmeticsModeUpdatedCallbacks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onCosmeticsModeUpdatedCallbacks,
                      put = __cordl_internal_set_onCosmeticsModeUpdatedCallbacks))::GlobalNamespace::__PermittedPatternTypesManager__OnCosmeticsModeUpdated* onCosmeticsModeUpdatedCallbacks;

  /// @brief Field onCosmeticsModeUpdatedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_onCosmeticsModeUpdatedPersistantCallbacks,
               put = setStaticF_onCosmeticsModeUpdatedPersistantCallbacks))::GlobalNamespace::__PermittedPatternTypesManager__OnCosmeticsModeUpdated* onCosmeticsModeUpdatedPersistantCallbacks;

  /// @brief Field onDressingRoomModeUpdatedCallbacks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onDressingRoomModeUpdatedCallbacks,
                      put = __cordl_internal_set_onDressingRoomModeUpdatedCallbacks))::GlobalNamespace::__PermittedPatternTypesManager__OnDressingRoomModeUpdated* onDressingRoomModeUpdatedCallbacks;

  /// @brief Field onDressingRoomModeUpdatedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_onDressingRoomModeUpdatedPersistantCallbacks,
      put = setStaticF_onDressingRoomModeUpdatedPersistantCallbacks))::GlobalNamespace::__PermittedPatternTypesManager__OnDressingRoomModeUpdated* onDressingRoomModeUpdatedPersistantCallbacks;

  /// @brief Field onPermittedPatternsUpdatedCallbacks, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get_onPermittedPatternsUpdatedCallbacks,
               put = __cordl_internal_set_onPermittedPatternsUpdatedCallbacks))::GlobalNamespace::__PermittedPatternTypesManager__OnPermittedPatternsUpdated* onPermittedPatternsUpdatedCallbacks;

  /// @brief Field onPermittedPatternsUpdatedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_onPermittedPatternsUpdatedPersistantCallbacks,
      put = setStaticF_onPermittedPatternsUpdatedPersistantCallbacks))::GlobalNamespace::__PermittedPatternTypesManager__OnPermittedPatternsUpdated* onPermittedPatternsUpdatedPersistantCallbacks;

  /// @brief Field onTechWebModeUpdatedCallbacks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_onTechWebModeUpdatedCallbacks,
                      put = __cordl_internal_set_onTechWebModeUpdatedCallbacks))::GlobalNamespace::__PermittedPatternTypesManager__OnTechWebModeUpdated* onTechWebModeUpdatedCallbacks;

  /// @brief Field onTechWebModeUpdatedPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onTechWebModeUpdatedPersistantCallbacks,
                             put = setStaticF_onTechWebModeUpdatedPersistantCallbacks))::GlobalNamespace::__PermittedPatternTypesManager__OnTechWebModeUpdated* onTechWebModeUpdatedPersistantCallbacks;

  /// @brief Field permittedPatternTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_permittedPatternTypes,
                             put = setStaticF_permittedPatternTypes))::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* permittedPatternTypes;

  /// @brief Method GetCurrent, addr 0xf43e8c, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* GetCurrent();

  static inline ::GlobalNamespace::PermittedPatternTypesManager* New_ctor();

  /// @brief Method OnDisable, addr 0xf424a0, size 0x134, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnIsCreativeModeUpdated, addr 0xf43e88, size 0x4, virtual false, abstract: false, final false
  static inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  /// @brief Method RefreshPermittedPatterns, addr 0xf4221c, size 0x284, virtual false, abstract: false, final false
  static inline void RefreshPermittedPatterns();

  /// @brief Method SetCosmeticsMode, addr 0xf431e4, size 0x34c, virtual false, abstract: false, final false
  static inline void SetCosmeticsMode(bool newCosmeticsMode);

  /// @brief Method SetDisableAll, addr 0xf42900, size 0x154, virtual false, abstract: false, final false
  static inline void SetDisableAll(bool newDisableAll);

  /// @brief Method SetDressingRoomMode, addr 0xf43530, size 0x34c, virtual false, abstract: false, final false
  static inline void SetDressingRoomMode(bool newDressingRoomMode);

  /// @brief Method SetHasTutorialLock, addr 0xf42ae8, size 0x154, virtual false, abstract: false, final false
  static inline void SetHasTutorialLock(bool newHasTutorialLock);

  /// @brief Method SetPermittedPatterns, addr 0xf425d4, size 0x298, virtual false, abstract: false, final false
  static inline void SetPermittedPatterns(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* newPermittedPatterns);

  /// @brief Method SetTargetCosmeticsMode, addr 0xf43bc4, size 0xec, virtual false, abstract: false, final false
  static inline void SetTargetCosmeticsMode(bool newCosmeticsMode);

  /// @brief Method SetTargetDressingRoomMode, addr 0xf43cb0, size 0xec, virtual false, abstract: false, final false
  static inline void SetTargetDressingRoomMode(bool newDressingRoomMode);

  /// @brief Method SetTargetTechWebMode, addr 0xf43d9c, size 0xec, virtual false, abstract: false, final false
  static inline void SetTargetTechWebMode(bool newTechWebMode);

  /// @brief Method SetTechWebMode, addr 0xf4387c, size 0x348, virtual false, abstract: false, final false
  static inline void SetTechWebMode(bool newTechWebMode);

  /// @brief Method Start, addr 0xf42118, size 0x104, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0xf42fb4, size 0x230, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_isInitialized() const;

  constexpr bool& __cordl_internal_get_isInitialized();

  constexpr ::GlobalNamespace::__PermittedPatternTypesManager__OnCosmeticsModeUpdated*& __cordl_internal_get_onCosmeticsModeUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PermittedPatternTypesManager__OnCosmeticsModeUpdated*> const& __cordl_internal_get_onCosmeticsModeUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__PermittedPatternTypesManager__OnDressingRoomModeUpdated*& __cordl_internal_get_onDressingRoomModeUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PermittedPatternTypesManager__OnDressingRoomModeUpdated*> const& __cordl_internal_get_onDressingRoomModeUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__PermittedPatternTypesManager__OnPermittedPatternsUpdated*& __cordl_internal_get_onPermittedPatternsUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PermittedPatternTypesManager__OnPermittedPatternsUpdated*> const& __cordl_internal_get_onPermittedPatternsUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__PermittedPatternTypesManager__OnTechWebModeUpdated*& __cordl_internal_get_onTechWebModeUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PermittedPatternTypesManager__OnTechWebModeUpdated*> const& __cordl_internal_get_onTechWebModeUpdatedCallbacks() const;

  constexpr void __cordl_internal_set_isInitialized(bool value);

  constexpr void __cordl_internal_set_onCosmeticsModeUpdatedCallbacks(::GlobalNamespace::__PermittedPatternTypesManager__OnCosmeticsModeUpdated* value);

  constexpr void __cordl_internal_set_onDressingRoomModeUpdatedCallbacks(::GlobalNamespace::__PermittedPatternTypesManager__OnDressingRoomModeUpdated* value);

  constexpr void __cordl_internal_set_onPermittedPatternsUpdatedCallbacks(::GlobalNamespace::__PermittedPatternTypesManager__OnPermittedPatternsUpdated* value);

  constexpr void __cordl_internal_set_onTechWebModeUpdatedCallbacks(::GlobalNamespace::__PermittedPatternTypesManager__OnTechWebModeUpdated* value);

  /// @brief Method .ctor, addr 0xf43ed4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__disableAll_k__BackingField();

  static inline bool getStaticF__hasTutorialLock_k__BackingField();

  static inline bool getStaticF__inCosmeticsMode_k__BackingField();

  static inline bool getStaticF__inDressingRoomMode_k__BackingField();

  static inline bool getStaticF__inTechWebMode_k__BackingField();

  static inline bool getStaticF__targetCosmeticsMode_k__BackingField();

  static inline bool getStaticF__targetDressingRoomMode_k__BackingField();

  static inline bool getStaticF__targetTechWebMode_k__BackingField();

  static inline float_t getStaticF_enterCosmeticsModeTime();

  static inline float_t getStaticF_enterDressingRoomModeTime();

  static inline float_t getStaticF_enterTechWebModeTime();

  static inline bool getStaticF_isWaitingToEnterCosmeticsMode();

  static inline bool getStaticF_isWaitingToEnterDressingRoomMode();

  static inline bool getStaticF_isWaitingToEnterTechWebMode();

  static inline ::GlobalNamespace::__PermittedPatternTypesManager__OnCosmeticsModeUpdated* getStaticF_onCosmeticsModeUpdatedPersistantCallbacks();

  static inline ::GlobalNamespace::__PermittedPatternTypesManager__OnDressingRoomModeUpdated* getStaticF_onDressingRoomModeUpdatedPersistantCallbacks();

  static inline ::GlobalNamespace::__PermittedPatternTypesManager__OnPermittedPatternsUpdated* getStaticF_onPermittedPatternsUpdatedPersistantCallbacks();

  static inline ::GlobalNamespace::__PermittedPatternTypesManager__OnTechWebModeUpdated* getStaticF_onTechWebModeUpdatedPersistantCallbacks();

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* getStaticF_permittedPatternTypes();

  /// @brief Method get_disableAll, addr 0xf4286c, size 0x48, virtual false, abstract: false, final false
  static inline bool get_disableAll();

  /// @brief Method get_hasTutorialLock, addr 0xf42a54, size 0x48, virtual false, abstract: false, final false
  static inline bool get_hasTutorialLock();

  /// @brief Method get_inCosmeticsMode, addr 0xf42cd0, size 0x48, virtual false, abstract: false, final false
  static inline bool get_inCosmeticsMode();

  /// @brief Method get_inDressingRoomMode, addr 0xf42df8, size 0x48, virtual false, abstract: false, final false
  static inline bool get_inDressingRoomMode();

  /// @brief Method get_inTechWebMode, addr 0xf42f20, size 0x48, virtual false, abstract: false, final false
  static inline bool get_inTechWebMode();

  /// @brief Method get_targetCosmeticsMode, addr 0xf42c3c, size 0x48, virtual false, abstract: false, final false
  static inline bool get_targetCosmeticsMode();

  /// @brief Method get_targetDressingRoomMode, addr 0xf42d64, size 0x48, virtual false, abstract: false, final false
  static inline bool get_targetDressingRoomMode();

  /// @brief Method get_targetTechWebMode, addr 0xf42e8c, size 0x48, virtual false, abstract: false, final false
  static inline bool get_targetTechWebMode();

  static inline void setStaticF__disableAll_k__BackingField(bool value);

  static inline void setStaticF__hasTutorialLock_k__BackingField(bool value);

  static inline void setStaticF__inCosmeticsMode_k__BackingField(bool value);

  static inline void setStaticF__inDressingRoomMode_k__BackingField(bool value);

  static inline void setStaticF__inTechWebMode_k__BackingField(bool value);

  static inline void setStaticF__targetCosmeticsMode_k__BackingField(bool value);

  static inline void setStaticF__targetDressingRoomMode_k__BackingField(bool value);

  static inline void setStaticF__targetTechWebMode_k__BackingField(bool value);

  static inline void setStaticF_enterCosmeticsModeTime(float_t value);

  static inline void setStaticF_enterDressingRoomModeTime(float_t value);

  static inline void setStaticF_enterTechWebModeTime(float_t value);

  static inline void setStaticF_isWaitingToEnterCosmeticsMode(bool value);

  static inline void setStaticF_isWaitingToEnterDressingRoomMode(bool value);

  static inline void setStaticF_isWaitingToEnterTechWebMode(bool value);

  static inline void setStaticF_onCosmeticsModeUpdatedPersistantCallbacks(::GlobalNamespace::__PermittedPatternTypesManager__OnCosmeticsModeUpdated* value);

  static inline void setStaticF_onDressingRoomModeUpdatedPersistantCallbacks(::GlobalNamespace::__PermittedPatternTypesManager__OnDressingRoomModeUpdated* value);

  static inline void setStaticF_onPermittedPatternsUpdatedPersistantCallbacks(::GlobalNamespace::__PermittedPatternTypesManager__OnPermittedPatternsUpdated* value);

  static inline void setStaticF_onTechWebModeUpdatedPersistantCallbacks(::GlobalNamespace::__PermittedPatternTypesManager__OnTechWebModeUpdated* value);

  static inline void setStaticF_permittedPatternTypes(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* value);

  /// @brief Method set_disableAll, addr 0xf428b4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_disableAll(bool value);

  /// @brief Method set_hasTutorialLock, addr 0xf42a9c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_hasTutorialLock(bool value);

  /// @brief Method set_inCosmeticsMode, addr 0xf42d18, size 0x4c, virtual false, abstract: false, final false
  static inline void set_inCosmeticsMode(bool value);

  /// @brief Method set_inDressingRoomMode, addr 0xf42e40, size 0x4c, virtual false, abstract: false, final false
  static inline void set_inDressingRoomMode(bool value);

  /// @brief Method set_inTechWebMode, addr 0xf42f68, size 0x4c, virtual false, abstract: false, final false
  static inline void set_inTechWebMode(bool value);

  /// @brief Method set_targetCosmeticsMode, addr 0xf42c84, size 0x4c, virtual false, abstract: false, final false
  static inline void set_targetCosmeticsMode(bool value);

  /// @brief Method set_targetDressingRoomMode, addr 0xf42dac, size 0x4c, virtual false, abstract: false, final false
  static inline void set_targetDressingRoomMode(bool value);

  /// @brief Method set_targetTechWebMode, addr 0xf42ed4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_targetTechWebMode(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PermittedPatternTypesManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PermittedPatternTypesManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PermittedPatternTypesManager(PermittedPatternTypesManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PermittedPatternTypesManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PermittedPatternTypesManager(PermittedPatternTypesManager const&) = delete;

  /// @brief Field onPermittedPatternsUpdatedCallbacks, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__PermittedPatternTypesManager__OnPermittedPatternsUpdated* ___onPermittedPatternsUpdatedCallbacks;

  /// @brief Field isInitialized, offset: 0x20, size: 0x1, def value: None
  bool ___isInitialized;

  /// @brief Field onCosmeticsModeUpdatedCallbacks, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__PermittedPatternTypesManager__OnCosmeticsModeUpdated* ___onCosmeticsModeUpdatedCallbacks;

  /// @brief Field onDressingRoomModeUpdatedCallbacks, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__PermittedPatternTypesManager__OnDressingRoomModeUpdated* ___onDressingRoomModeUpdatedCallbacks;

  /// @brief Field onTechWebModeUpdatedCallbacks, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__PermittedPatternTypesManager__OnTechWebModeUpdated* ___onTechWebModeUpdatedCallbacks;

  /// @brief Field cosmeticsOverrideZoneTag offset 0xffffffff size 0x8
  static constexpr ::ConstString cosmeticsOverrideZoneTag{ u"CosmeticsOverrideZone" };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Permitted Patterns: " };

  /// @brief Field doCosmeticsModeWaitDuration offset 0xffffffff size 0x4
  static constexpr float_t doCosmeticsModeWaitDuration{ 1.0 };

  /// @brief Field doDressingRoomModeWaitDuration offset 0xffffffff size 0x4
  static constexpr float_t doDressingRoomModeWaitDuration{ 1.0 };

  /// @brief Field doTechWebModeWaitDuration offset 0xffffffff size 0x4
  static constexpr float_t doTechWebModeWaitDuration{ 1.0 };

  /// @brief Field dressingRoomOverrideZoneTag offset 0xffffffff size 0x8
  static constexpr ::ConstString dressingRoomOverrideZoneTag{ u"DressingRoomOverrideZone" };

  /// @brief Field techWebOverrideZoneTag offset 0xffffffff size 0x8
  static constexpr ::ConstString techWebOverrideZoneTag{ u"TechWebOverrideZone" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PermittedPatternTypesManager, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PermittedPatternTypesManager, ___onPermittedPatternsUpdatedCallbacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PermittedPatternTypesManager, ___isInitialized) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PermittedPatternTypesManager, ___onCosmeticsModeUpdatedCallbacks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PermittedPatternTypesManager, ___onDressingRoomModeUpdatedCallbacks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PermittedPatternTypesManager, ___onTechWebModeUpdatedCallbacks) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PermittedPatternTypesManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PermittedPatternTypesManager*, "", "PermittedPatternTypesManager");
NEED_NO_BOX(::GlobalNamespace::__PermittedPatternTypesManager__OnCosmeticsModeUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PermittedPatternTypesManager__OnCosmeticsModeUpdated*, "", "PermittedPatternTypesManager/OnCosmeticsModeUpdated");
NEED_NO_BOX(::GlobalNamespace::__PermittedPatternTypesManager__OnDressingRoomModeUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PermittedPatternTypesManager__OnDressingRoomModeUpdated*, "", "PermittedPatternTypesManager/OnDressingRoomModeUpdated");
NEED_NO_BOX(::GlobalNamespace::__PermittedPatternTypesManager__OnPermittedPatternsUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PermittedPatternTypesManager__OnPermittedPatternsUpdated*, "", "PermittedPatternTypesManager/OnPermittedPatternsUpdated");
NEED_NO_BOX(::GlobalNamespace::__PermittedPatternTypesManager__OnTechWebModeUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PermittedPatternTypesManager__OnTechWebModeUpdated*, "", "PermittedPatternTypesManager/OnTechWebModeUpdated");
