#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObservationDisplay)
namespace GlobalNamespace {
class Avatar;
}
namespace GlobalNamespace {
class MasterPlayer;
}
namespace GlobalNamespace {
class Player;
}
namespace GlobalNamespace {
class __ObservationDisplay____c__DisplayClass12_0;
}
namespace GlobalNamespace {
struct __PlayerAppearanceManager__PlayerAppearance;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ObservationDisplay;
}
namespace GlobalNamespace {
class __ObservationDisplay____c__DisplayClass12_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObservationDisplay);
MARK_REF_PTR_T(::GlobalNamespace::__ObservationDisplay____c__DisplayClass12_0);
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObservationDisplay::<>c__DisplayClass12_0*
class CORDL_TYPE __ObservationDisplay____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::ObservationDisplay> __4__this;

  /// @brief Field curFetchPlayerApperanceAccountID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_curFetchPlayerApperanceAccountID, put = __cordl_internal_set_curFetchPlayerApperanceAccountID))::StringW curFetchPlayerApperanceAccountID;

  static inline ::GlobalNamespace::__ObservationDisplay____c__DisplayClass12_0* New_ctor();

  /// @brief Method <Display>b__0, addr 0x154dffc, size 0xa8, virtual false, abstract: false, final false
  inline void _Display_b__0(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance);

  /// @brief Method <Display>b__1, addr 0x154e0a4, size 0x12c, virtual false, abstract: false, final false
  inline void _Display_b__1(::StringW errType);

  constexpr ::UnityW<::GlobalNamespace::ObservationDisplay> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::ObservationDisplay>& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_curFetchPlayerApperanceAccountID() const;

  constexpr ::StringW& __cordl_internal_get_curFetchPlayerApperanceAccountID();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ObservationDisplay> value);

  constexpr void __cordl_internal_set_curFetchPlayerApperanceAccountID(::StringW value);

  /// @brief Method .ctor, addr 0x154d930, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObservationDisplay____c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ObservationDisplay____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ObservationDisplay____c__DisplayClass12_0(__ObservationDisplay____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ObservationDisplay____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ObservationDisplay____c__DisplayClass12_0(__ObservationDisplay____c__DisplayClass12_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObservationDisplay> _____4__this;

  /// @brief Field curFetchPlayerApperanceAccountID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___curFetchPlayerApperanceAccountID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ObservationDisplay____c__DisplayClass12_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObservationDisplay____c__DisplayClass12_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObservationDisplay____c__DisplayClass12_0, ___curFetchPlayerApperanceAccountID) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ObservationDisplay
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObservationDisplay*
class CORDL_TYPE ObservationDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass12_0 = ::GlobalNamespace::__ObservationDisplay____c__DisplayClass12_0;

  /// @brief Field avatar, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_avatar, put = __cordl_internal_set_avatar))::UnityW<::GlobalNamespace::Avatar> avatar;

  /// @brief Field displayNameText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_displayNameText, put = __cordl_internal_set_displayNameText))::UnityW<::UnityEngine::UI::Text> displayNameText;

  /// @brief Field distanceToSizeRatio, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_distanceToSizeRatio, put = __cordl_internal_set_distanceToSizeRatio)) float_t distanceToSizeRatio;

  /// @brief Field fetchPlayerApperanceAccountID, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_fetchPlayerApperanceAccountID, put = __cordl_internal_set_fetchPlayerApperanceAccountID))::StringW fetchPlayerApperanceAccountID;

  /// @brief Field height, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) float_t height;

  /// @brief Field masterPlayer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayer, put = __cordl_internal_set_masterPlayer))::UnityW<::GlobalNamespace::MasterPlayer> masterPlayer;

  /// @brief Field minSize, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_minSize, put = __cordl_internal_set_minSize)) float_t minSize;

  /// @brief Field targetPosition, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_targetPosition, put = __cordl_internal_set_targetPosition))::UnityEngine::Vector3 targetPosition;

  /// @brief Field targetRotation, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_targetRotation, put = __cordl_internal_set_targetRotation))::UnityEngine::Quaternion targetRotation;

  /// @brief Method Display, addr 0x154d71c, size 0x214, virtual false, abstract: false, final false
  inline void Display(::StringW accountID);

  /// @brief Method Display, addr 0x154d938, size 0x174, virtual false, abstract: false, final false
  inline void Display(::GlobalNamespace::Player* player);

  /// @brief Method DoScaleUpdate, addr 0x154dcf0, size 0x1a8, virtual false, abstract: false, final false
  inline void DoScaleUpdate();

  static inline ::GlobalNamespace::ObservationDisplay* New_ctor();

  /// @brief Method SetPosition, addr 0x154daac, size 0x244, virtual false, abstract: false, final false
  inline void SetPosition(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 facing, bool instant);

  /// @brief Method Update, addr 0x154de98, size 0x150, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::Avatar> const& __cordl_internal_get_avatar() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar>& __cordl_internal_get_avatar();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_displayNameText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_displayNameText();

  constexpr float_t const& __cordl_internal_get_distanceToSizeRatio() const;

  constexpr float_t& __cordl_internal_get_distanceToSizeRatio();

  constexpr ::StringW const& __cordl_internal_get_fetchPlayerApperanceAccountID() const;

  constexpr ::StringW& __cordl_internal_get_fetchPlayerApperanceAccountID();

  constexpr float_t const& __cordl_internal_get_height() const;

  constexpr float_t& __cordl_internal_get_height();

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& __cordl_internal_get_masterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& __cordl_internal_get_masterPlayer();

  constexpr float_t const& __cordl_internal_get_minSize() const;

  constexpr float_t& __cordl_internal_get_minSize();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_targetRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_targetRotation();

  constexpr void __cordl_internal_set_avatar(::UnityW<::GlobalNamespace::Avatar> value);

  constexpr void __cordl_internal_set_displayNameText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_distanceToSizeRatio(float_t value);

  constexpr void __cordl_internal_set_fetchPlayerApperanceAccountID(::StringW value);

  constexpr void __cordl_internal_set_height(float_t value);

  constexpr void __cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value);

  constexpr void __cordl_internal_set_minSize(float_t value);

  constexpr void __cordl_internal_set_targetPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_targetRotation(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x154dfe8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObservationDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObservationDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObservationDisplay(ObservationDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObservationDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObservationDisplay(ObservationDisplay const&) = delete;

  /// @brief Field displayNameText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___displayNameText;

  /// @brief Field avatar, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Avatar> ___avatar;

  /// @brief Field targetPosition, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___targetPosition;

  /// @brief Field targetRotation, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___targetRotation;

  /// @brief Field height, offset: 0x44, size: 0x4, def value: None
  float_t ___height;

  /// @brief Field distanceToSizeRatio, offset: 0x48, size: 0x4, def value: None
  float_t ___distanceToSizeRatio;

  /// @brief Field minSize, offset: 0x4c, size: 0x4, def value: None
  float_t ___minSize;

  /// @brief Field masterPlayer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MasterPlayer> ___masterPlayer;

  /// @brief Field fetchPlayerApperanceAccountID, offset: 0x58, size: 0x8, def value: None
  ::StringW ___fetchPlayerApperanceAccountID;

  /// @brief Field lerpSpeed offset 0xffffffff size 0x4
  static constexpr float_t lerpSpeed{ 10.0 };

  /// @brief Field normalYForFaceCamera offset 0xffffffff size 0x4
  static constexpr float_t normalYForFaceCamera{ 0.5 };

  /// @brief Field offsetFromSurface offset 0xffffffff size 0x4
  static constexpr float_t offsetFromSurface{ 0.1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObservationDisplay, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservationDisplay, ___displayNameText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservationDisplay, ___avatar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservationDisplay, ___targetPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservationDisplay, ___targetRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservationDisplay, ___height) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservationDisplay, ___distanceToSizeRatio) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservationDisplay, ___minSize) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservationDisplay, ___masterPlayer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObservationDisplay, ___fetchPlayerApperanceAccountID) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObservationDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObservationDisplay*, "", "ObservationDisplay");
NEED_NO_BOX(::GlobalNamespace::__ObservationDisplay____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ObservationDisplay____c__DisplayClass12_0*, "", "ObservationDisplay/<>c__DisplayClass12_0");
