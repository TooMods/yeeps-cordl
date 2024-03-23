#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationSignPost)
namespace GlobalNamespace {
class NavigationSign;
}
namespace GlobalNamespace {
class RoomNavigation;
}
namespace GlobalNamespace {
struct __RoomManager__TravelDirection;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NavigationSignPost;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NavigationSignPost);
// Type: ::NavigationSignPost
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NavigationSignPost*
class CORDL_TYPE NavigationSignPost : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field directionContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_directionContainer, put = __cordl_internal_set_directionContainer))::UnityW<::UnityEngine::Transform> directionContainer;

  /// @brief Field flipX, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_flipX, put = __cordl_internal_set_flipX)) bool flipX;

  /// @brief Field flipZ, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get_flipZ, put = __cordl_internal_set_flipZ)) bool flipZ;

  /// @brief Field isVerbose, offset 0x3e, size 0x1
  __declspec(property(get = __cordl_internal_get_isVerbose, put = __cordl_internal_set_isVerbose)) bool isVerbose;

  /// @brief Field maxPostHeight, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_maxPostHeight, put = __cordl_internal_set_maxPostHeight)) float_t maxPostHeight;

  /// @brief Field minPostHeight, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_minPostHeight, put = __cordl_internal_set_minPostHeight)) float_t minPostHeight;

  /// @brief Field navigationSigns, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_navigationSigns,
      put = __cordl_internal_set_navigationSigns))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RoomNavigation*, ::UnityW<::GlobalNamespace::NavigationSign>>* navigationSigns;

  /// @brief Field postWidth, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_postWidth, put = __cordl_internal_set_postWidth)) float_t postWidth;

  /// @brief Field signContainer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_signContainer, put = __cordl_internal_set_signContainer))::UnityW<::UnityEngine::Transform> signContainer;

  /// @brief Field verboseContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_verboseContainer, put = __cordl_internal_set_verboseContainer))::UnityW<::UnityEngine::GameObject> verboseContainer;

  static inline ::GlobalNamespace::NavigationSignPost* New_ctor();

  /// @brief Method PositionSign, addr 0x175c918, size 0x1c4, virtual false, abstract: false, final false
  inline void PositionSign(::GlobalNamespace::NavigationSign* sign, ::GlobalNamespace::__RoomManager__TravelDirection travelDirection, int32_t index);

  /// @brief Method RemoveNavigation, addr 0x175ce74, size 0x208, virtual false, abstract: false, final false
  inline void RemoveNavigation(::GlobalNamespace::RoomNavigation* navigation);

  /// @brief Method SetFlips, addr 0x175c790, size 0x188, virtual false, abstract: false, final false
  inline void SetFlips(bool flipX, bool flipZ);

  /// @brief Method SetFlipsToFacePosition, addr 0x175cadc, size 0x54, virtual false, abstract: false, final false
  inline void SetFlipsToFacePosition(::UnityEngine::Vector3 position);

  /// @brief Method SetNavigation, addr 0x175cb30, size 0x220, virtual false, abstract: false, final false
  inline void SetNavigation(::GlobalNamespace::RoomNavigation* navigation, ::GlobalNamespace::__RoomManager__TravelDirection travelDirection, int32_t distance);

  /// @brief Method SetVerbose, addr 0x175d07c, size 0x1a4, virtual false, abstract: false, final false
  inline void SetVerbose(bool newIsVerbose);

  /// @brief Method Start, addr 0x175c730, size 0x60, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdatePostHeight, addr 0x175cd80, size 0xf4, virtual false, abstract: false, final false
  inline void UpdatePostHeight();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_directionContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_directionContainer();

  constexpr bool const& __cordl_internal_get_flipX() const;

  constexpr bool& __cordl_internal_get_flipX();

  constexpr bool const& __cordl_internal_get_flipZ() const;

  constexpr bool& __cordl_internal_get_flipZ();

  constexpr bool const& __cordl_internal_get_isVerbose() const;

  constexpr bool& __cordl_internal_get_isVerbose();

  constexpr float_t const& __cordl_internal_get_maxPostHeight() const;

  constexpr float_t& __cordl_internal_get_maxPostHeight();

  constexpr float_t const& __cordl_internal_get_minPostHeight() const;

  constexpr float_t& __cordl_internal_get_minPostHeight();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RoomNavigation*, ::UnityW<::GlobalNamespace::NavigationSign>>*& __cordl_internal_get_navigationSigns();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RoomNavigation*, ::UnityW<::GlobalNamespace::NavigationSign>>*> const&
  __cordl_internal_get_navigationSigns() const;

  constexpr float_t const& __cordl_internal_get_postWidth() const;

  constexpr float_t& __cordl_internal_get_postWidth();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_signContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_signContainer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_verboseContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_verboseContainer();

  constexpr void __cordl_internal_set_directionContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_flipX(bool value);

  constexpr void __cordl_internal_set_flipZ(bool value);

  constexpr void __cordl_internal_set_isVerbose(bool value);

  constexpr void __cordl_internal_set_maxPostHeight(float_t value);

  constexpr void __cordl_internal_set_minPostHeight(float_t value);

  constexpr void __cordl_internal_set_navigationSigns(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RoomNavigation*, ::UnityW<::GlobalNamespace::NavigationSign>>* value);

  constexpr void __cordl_internal_set_postWidth(float_t value);

  constexpr void __cordl_internal_set_signContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_verboseContainer(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x175d220, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationSignPost();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigationSignPost", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationSignPost(NavigationSignPost&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationSignPost", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationSignPost(NavigationSignPost const&) = delete;

  /// @brief Field verboseContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___verboseContainer;

  /// @brief Field directionContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___directionContainer;

  /// @brief Field signContainer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___signContainer;

  /// @brief Field minPostHeight, offset: 0x30, size: 0x4, def value: None
  float_t ___minPostHeight;

  /// @brief Field maxPostHeight, offset: 0x34, size: 0x4, def value: None
  float_t ___maxPostHeight;

  /// @brief Field postWidth, offset: 0x38, size: 0x4, def value: None
  float_t ___postWidth;

  /// @brief Field flipX, offset: 0x3c, size: 0x1, def value: None
  bool ___flipX;

  /// @brief Field flipZ, offset: 0x3d, size: 0x1, def value: None
  bool ___flipZ;

  /// @brief Field isVerbose, offset: 0x3e, size: 0x1, def value: None
  bool ___isVerbose;

  /// @brief Field navigationSigns, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RoomNavigation*, ::UnityW<::GlobalNamespace::NavigationSign>>* ___navigationSigns;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Navigation Sign Post: " };

  /// @brief Field distanceBetweenSigns offset 0xffffffff size 0x4
  static constexpr float_t distanceBetweenSigns{ 0.0375 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NavigationSignPost, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSignPost, ___verboseContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSignPost, ___directionContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSignPost, ___signContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSignPost, ___minPostHeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSignPost, ___maxPostHeight) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSignPost, ___postWidth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSignPost, ___flipX) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSignPost, ___flipZ) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSignPost, ___isVerbose) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationSignPost, ___navigationSigns) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NavigationSignPost);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NavigationSignPost*, "", "NavigationSignPost");
