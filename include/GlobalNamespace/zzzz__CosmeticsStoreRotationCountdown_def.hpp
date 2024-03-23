#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CosmeticsStoreRotationCountdown)
namespace GlobalNamespace {
class CosmeticsStoreInstance;
}
namespace System {
struct TimeSpan;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticsStoreRotationCountdown;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CosmeticsStoreRotationCountdown);
// Type: ::CosmeticsStoreRotationCountdown
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsStoreRotationCountdown*
class CORDL_TYPE CosmeticsStoreRotationCountdown : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field activeContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_activeContainer, put = __cordl_internal_set_activeContainer))::UnityW<::UnityEngine::GameObject> activeContainer;

  /// @brief Field countdownTexts, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_countdownTexts,
                      put = __cordl_internal_set_countdownTexts))::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> countdownTexts;

  /// @brief Field isRegisteredForActiveCallbacks, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegisteredForActiveCallbacks, put = __cordl_internal_set_isRegisteredForActiveCallbacks)) bool isRegisteredForActiveCallbacks;

  /// @brief Field isRegisteredForBaseCallbacks, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegisteredForBaseCallbacks, put = __cordl_internal_set_isRegisteredForBaseCallbacks)) bool isRegisteredForBaseCallbacks;

  /// @brief Field storeInstance, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_storeInstance, put = __cordl_internal_set_storeInstance))::GlobalNamespace::CosmeticsStoreInstance* storeInstance;

  static inline ::GlobalNamespace::CosmeticsStoreRotationCountdown* New_ctor();

  /// @brief Method OnCosmeticsModeUpdated, addr 0x1546d0c, size 0x8, virtual false, abstract: false, final false
  inline void OnCosmeticsModeUpdated(bool newCosmeticsMode);

  /// @brief Method OnDisable, addr 0x1546d14, size 0x21c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x1546b98, size 0x174, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnHasTimeUntilNextRotationUpdated, addr 0x15471f0, size 0x20, virtual false, abstract: false, final false
  inline void OnHasTimeUntilNextRotationUpdated(bool hasTimeUntilNextRotation);

  /// @brief Method OnTimeUntilNextRotationUpdated, addr 0x1547210, size 0xc4, virtual false, abstract: false, final false
  inline void OnTimeUntilNextRotationUpdated(::System::TimeSpan timeUntilNextRotation);

  /// @brief Method SetActive, addr 0x1546f30, size 0x2c0, virtual false, abstract: false, final false
  inline void SetActive(bool newActive);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activeContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activeContainer();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> const& __cordl_internal_get_countdownTexts() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*>& __cordl_internal_get_countdownTexts();

  constexpr bool const& __cordl_internal_get_isRegisteredForActiveCallbacks() const;

  constexpr bool& __cordl_internal_get_isRegisteredForActiveCallbacks();

  constexpr bool const& __cordl_internal_get_isRegisteredForBaseCallbacks() const;

  constexpr bool& __cordl_internal_get_isRegisteredForBaseCallbacks();

  constexpr ::GlobalNamespace::CosmeticsStoreInstance*& __cordl_internal_get_storeInstance();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CosmeticsStoreInstance*> const& __cordl_internal_get_storeInstance() const;

  constexpr void __cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_countdownTexts(::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> value);

  constexpr void __cordl_internal_set_isRegisteredForActiveCallbacks(bool value);

  constexpr void __cordl_internal_set_isRegisteredForBaseCallbacks(bool value);

  constexpr void __cordl_internal_set_storeInstance(::GlobalNamespace::CosmeticsStoreInstance* value);

  /// @brief Method .ctor, addr 0x15472d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticsStoreRotationCountdown();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsStoreRotationCountdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CosmeticsStoreRotationCountdown(CosmeticsStoreRotationCountdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsStoreRotationCountdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CosmeticsStoreRotationCountdown(CosmeticsStoreRotationCountdown const&) = delete;

  /// @brief Field countdownTexts, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> ___countdownTexts;

  /// @brief Field activeContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___activeContainer;

  /// @brief Field isRegisteredForBaseCallbacks, offset: 0x28, size: 0x1, def value: None
  bool ___isRegisteredForBaseCallbacks;

  /// @brief Field isRegisteredForActiveCallbacks, offset: 0x29, size: 0x1, def value: None
  bool ___isRegisteredForActiveCallbacks;

  /// @brief Field storeInstance, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::CosmeticsStoreInstance* ___storeInstance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticsStoreRotationCountdown, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStoreRotationCountdown, ___countdownTexts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStoreRotationCountdown, ___activeContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStoreRotationCountdown, ___isRegisteredForBaseCallbacks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStoreRotationCountdown, ___isRegisteredForActiveCallbacks) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStoreRotationCountdown, ___storeInstance) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CosmeticsStoreRotationCountdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticsStoreRotationCountdown*, "", "CosmeticsStoreRotationCountdown");
