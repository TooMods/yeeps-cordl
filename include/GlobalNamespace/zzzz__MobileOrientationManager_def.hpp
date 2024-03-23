#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MobileOrientationManager)
namespace GlobalNamespace {
class MobileDynamicUIElement;
}
namespace GlobalNamespace {
class __MobileOrientationManager__OnOrientationChanged;
}
namespace GlobalNamespace {
class __MobileOrientationManager__OnPortraitLockChanged;
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
class MobileOrientationManager;
}
namespace GlobalNamespace {
class __MobileOrientationManager__OnOrientationChanged;
}
namespace GlobalNamespace {
class __MobileOrientationManager__OnPortraitLockChanged;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileOrientationManager);
MARK_REF_PTR_T(::GlobalNamespace::__MobileOrientationManager__OnOrientationChanged);
MARK_REF_PTR_T(::GlobalNamespace::__MobileOrientationManager__OnPortraitLockChanged);
// Type: ::OnOrientationChanged
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileOrientationManager::OnOrientationChanged*
class CORDL_TYPE __MobileOrientationManager__OnOrientationChanged : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2dfec60, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool isLandscape, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2dfece8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2dfec48, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool isLandscape);

  static inline ::GlobalNamespace::__MobileOrientationManager__OnOrientationChanged* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2dfeb84, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileOrientationManager__OnOrientationChanged();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileOrientationManager__OnOrientationChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileOrientationManager__OnOrientationChanged(__MobileOrientationManager__OnOrientationChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileOrientationManager__OnOrientationChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileOrientationManager__OnOrientationChanged(__MobileOrientationManager__OnOrientationChanged const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileOrientationManager__OnOrientationChanged, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPortraitLockChanged
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileOrientationManager::OnPortraitLockChanged*
class CORDL_TYPE __MobileOrientationManager__OnPortraitLockChanged : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2dfedd4, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool isOverridePortrait, bool isManualChange, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2dfee78, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2dfedb8, size 0x1c, virtual true, abstract: false, final false
  inline void Invoke(bool isOverridePortrait, bool isManualChange);

  static inline ::GlobalNamespace::__MobileOrientationManager__OnPortraitLockChanged* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2dfecf4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileOrientationManager__OnPortraitLockChanged();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileOrientationManager__OnPortraitLockChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileOrientationManager__OnPortraitLockChanged(__MobileOrientationManager__OnPortraitLockChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileOrientationManager__OnPortraitLockChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileOrientationManager__OnPortraitLockChanged(__MobileOrientationManager__OnPortraitLockChanged const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileOrientationManager__OnPortraitLockChanged, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MobileOrientationManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileOrientationManager*
class CORDL_TYPE MobileOrientationManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::MobileOrientationManager>> {
public:
  // Declarations
  using OnOrientationChanged = ::GlobalNamespace::__MobileOrientationManager__OnOrientationChanged;

  using OnPortraitLockChanged = ::GlobalNamespace::__MobileOrientationManager__OnPortraitLockChanged;

  /// @brief Field <isLandscape>k__BackingField, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__isLandscape_k__BackingField, put = __cordl_internal_set__isLandscape_k__BackingField)) bool _isLandscape_k__BackingField;

  /// @brief Field <isOverridePortrait>k__BackingField, offset 0x1e, size 0x1
  __declspec(property(get = __cordl_internal_get__isOverridePortrait_k__BackingField, put = __cordl_internal_set__isOverridePortrait_k__BackingField)) bool _isOverridePortrait_k__BackingField;

  /// @brief Field dynamicUIElements, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_dynamicUIElements,
                      put = __cordl_internal_set_dynamicUIElements))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileDynamicUIElement>>* dynamicUIElements;

  __declspec(property(get = get_isLandscape, put = set_isLandscape)) bool isLandscape;

  __declspec(property(get = get_isOverridePortrait, put = set_isOverridePortrait)) bool isOverridePortrait;

  /// @brief Field nextOrientationCheckTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_nextOrientationCheckTime, put = __cordl_internal_set_nextOrientationCheckTime)) float_t nextOrientationCheckTime;

  /// @brief Field onOrientationChanged, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onOrientationChanged,
                      put = __cordl_internal_set_onOrientationChanged))::GlobalNamespace::__MobileOrientationManager__OnOrientationChanged* onOrientationChanged;

  /// @brief Field onPortraitLockChanged, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onPortraitLockChanged,
                      put = __cordl_internal_set_onPortraitLockChanged))::GlobalNamespace::__MobileOrientationManager__OnPortraitLockChanged* onPortraitLockChanged;

  /// @brief Field screenIsLandscape, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_screenIsLandscape, put = __cordl_internal_set_screenIsLandscape)) bool screenIsLandscape;

  /// @brief Method DoOrientationCheck, addr 0x2dfe704, size 0x2d4, virtual false, abstract: false, final false
  inline void DoOrientationCheck();

  static inline ::GlobalNamespace::MobileOrientationManager* New_ctor();

  /// @brief Method RegisterDynamicUIElement, addr 0x2dfe65c, size 0xa8, virtual false, abstract: false, final false
  inline void RegisterDynamicUIElement(::GlobalNamespace::MobileDynamicUIElement* dynamicUIElement);

  /// @brief Method Update, addr 0x2dfe9d8, size 0x11c, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__isLandscape_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isLandscape_k__BackingField();

  constexpr bool const& __cordl_internal_get__isOverridePortrait_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isOverridePortrait_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileDynamicUIElement>>*& __cordl_internal_get_dynamicUIElements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileDynamicUIElement>>*> const& __cordl_internal_get_dynamicUIElements() const;

  constexpr float_t const& __cordl_internal_get_nextOrientationCheckTime() const;

  constexpr float_t& __cordl_internal_get_nextOrientationCheckTime();

  constexpr ::GlobalNamespace::__MobileOrientationManager__OnOrientationChanged*& __cordl_internal_get_onOrientationChanged();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MobileOrientationManager__OnOrientationChanged*> const& __cordl_internal_get_onOrientationChanged() const;

  constexpr ::GlobalNamespace::__MobileOrientationManager__OnPortraitLockChanged*& __cordl_internal_get_onPortraitLockChanged();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MobileOrientationManager__OnPortraitLockChanged*> const& __cordl_internal_get_onPortraitLockChanged() const;

  constexpr bool const& __cordl_internal_get_screenIsLandscape() const;

  constexpr bool& __cordl_internal_get_screenIsLandscape();

  constexpr void __cordl_internal_set__isLandscape_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isOverridePortrait_k__BackingField(bool value);

  constexpr void __cordl_internal_set_dynamicUIElements(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileDynamicUIElement>>* value);

  constexpr void __cordl_internal_set_nextOrientationCheckTime(float_t value);

  constexpr void __cordl_internal_set_onOrientationChanged(::GlobalNamespace::__MobileOrientationManager__OnOrientationChanged* value);

  constexpr void __cordl_internal_set_onPortraitLockChanged(::GlobalNamespace::__MobileOrientationManager__OnPortraitLockChanged* value);

  constexpr void __cordl_internal_set_screenIsLandscape(bool value);

  /// @brief Method .ctor, addr 0x2dfeaf4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isLandscape, addr 0x2dfe634, size 0x8, virtual false, abstract: false, final false
  inline bool get_isLandscape();

  /// @brief Method get_isOverridePortrait, addr 0x2dfe648, size 0x8, virtual false, abstract: false, final false
  inline bool get_isOverridePortrait();

  /// @brief Method set_isLandscape, addr 0x2dfe63c, size 0xc, virtual false, abstract: false, final false
  inline void set_isLandscape(bool value);

  /// @brief Method set_isOverridePortrait, addr 0x2dfe650, size 0xc, virtual false, abstract: false, final false
  inline void set_isOverridePortrait(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileOrientationManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileOrientationManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileOrientationManager(MobileOrientationManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileOrientationManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileOrientationManager(MobileOrientationManager const&) = delete;

  /// @brief Field nextOrientationCheckTime, offset: 0x18, size: 0x4, def value: None
  float_t ___nextOrientationCheckTime;

  /// @brief Field <isLandscape>k__BackingField, offset: 0x1c, size: 0x1, def value: None
  bool ____isLandscape_k__BackingField;

  /// @brief Field screenIsLandscape, offset: 0x1d, size: 0x1, def value: None
  bool ___screenIsLandscape;

  /// @brief Field <isOverridePortrait>k__BackingField, offset: 0x1e, size: 0x1, def value: None
  bool ____isOverridePortrait_k__BackingField;

  /// @brief Field dynamicUIElements, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileDynamicUIElement>>* ___dynamicUIElements;

  /// @brief Field onOrientationChanged, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__MobileOrientationManager__OnOrientationChanged* ___onOrientationChanged;

  /// @brief Field onPortraitLockChanged, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__MobileOrientationManager__OnPortraitLockChanged* ___onPortraitLockChanged;

  /// @brief Field ORIENTATION_CHECK_DELAY offset 0xffffffff size 0x4
  static constexpr float_t ORIENTATION_CHECK_DELAY{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileOrientationManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileOrientationManager, ___nextOrientationCheckTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileOrientationManager, ____isLandscape_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileOrientationManager, ___screenIsLandscape) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileOrientationManager, ____isOverridePortrait_k__BackingField) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileOrientationManager, ___dynamicUIElements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileOrientationManager, ___onOrientationChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileOrientationManager, ___onPortraitLockChanged) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileOrientationManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileOrientationManager*, "", "MobileOrientationManager");
NEED_NO_BOX(::GlobalNamespace::__MobileOrientationManager__OnOrientationChanged);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileOrientationManager__OnOrientationChanged*, "", "MobileOrientationManager/OnOrientationChanged");
NEED_NO_BOX(::GlobalNamespace::__MobileOrientationManager__OnPortraitLockChanged);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileOrientationManager__OnPortraitLockChanged*, "", "MobileOrientationManager/OnPortraitLockChanged");
