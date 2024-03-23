#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AtlasAllocator)
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::Rendering {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::Rendering {
class __AtlasAllocator__AtlasNode;
}
namespace UnityEngine::Rendering {
class __AtlasAllocator____c;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class AtlasAllocator;
}
namespace UnityEngine::Rendering {
class __AtlasAllocator__AtlasNode;
}
namespace UnityEngine::Rendering {
class __AtlasAllocator____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::AtlasAllocator);
MARK_REF_PTR_T(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode);
MARK_REF_PTR_T(::UnityEngine::Rendering::__AtlasAllocator____c);
// Type: ::AtlasNode
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::AtlasAllocator::AtlasNode*
class CORDL_TYPE __AtlasAllocator__AtlasNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_BottomChild, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BottomChild, put = __cordl_internal_set_m_BottomChild))::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* m_BottomChild;

  /// @brief Field m_Rect, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Rect, put = __cordl_internal_set_m_Rect))::UnityEngine::Vector4 m_Rect;

  /// @brief Field m_RightChild, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RightChild, put = __cordl_internal_set_m_RightChild))::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* m_RightChild;

  /// @brief Method Allocate, addr 0x1a0b7c0, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* Allocate(ByRef<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*> pool, int32_t width,
                                                                         int32_t height, bool powerOfTwoPadding);

  static inline ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* New_ctor();

  /// @brief Method Release, addr 0x1a0b9e4, size 0xd8, virtual false, abstract: false, final false
  inline void Release(ByRef<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*> pool);

  constexpr ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*& __cordl_internal_get_m_BottomChild();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*> const& __cordl_internal_get_m_BottomChild() const;

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_m_Rect() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_m_Rect();

  constexpr ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*& __cordl_internal_get_m_RightChild();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*> const& __cordl_internal_get_m_RightChild() const;

  constexpr void __cordl_internal_set_m_BottomChild(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* value);

  constexpr void __cordl_internal_set_m_Rect(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_m_RightChild(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* value);

  /// @brief Method .ctor, addr 0x1a0b734, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AtlasAllocator__AtlasNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AtlasAllocator__AtlasNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AtlasAllocator__AtlasNode(__AtlasAllocator__AtlasNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AtlasAllocator__AtlasNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AtlasAllocator__AtlasNode(__AtlasAllocator__AtlasNode const&) = delete;

  /// @brief Field m_RightChild, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* ___m_RightChild;

  /// @brief Field m_BottomChild, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* ___m_BottomChild;

  /// @brief Field m_Rect, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_Rect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode, ___m_RightChild) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode, ___m_BottomChild) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode, ___m_Rect) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::AtlasAllocator::<>c*
class CORDL_TYPE __AtlasAllocator____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::__AtlasAllocator____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>* __9__6_0;

  /// @brief Field <>9__6_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_1, put = setStaticF___9__6_1))::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>* __9__6_1;

  static inline ::UnityEngine::Rendering::__AtlasAllocator____c* New_ctor();

  /// @brief Method <.ctor>b__6_0, addr 0x1a0bb28, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__6_0(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* _);

  /// @brief Method <.ctor>b__6_1, addr 0x1a0bb2c, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__6_1(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* _);

  /// @brief Method .ctor, addr 0x1a0bb20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::__AtlasAllocator____c* getStaticF___9();

  static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>* getStaticF___9__6_0();

  static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>* getStaticF___9__6_1();

  static inline void setStaticF___9(::UnityEngine::Rendering::__AtlasAllocator____c* value);

  static inline void setStaticF___9__6_0(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>* value);

  static inline void setStaticF___9__6_1(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AtlasAllocator____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AtlasAllocator____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AtlasAllocator____c(__AtlasAllocator____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AtlasAllocator____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AtlasAllocator____c(__AtlasAllocator____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__AtlasAllocator____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::AtlasAllocator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::AtlasAllocator*
class CORDL_TYPE AtlasAllocator : public ::System::Object {
public:
  // Declarations
  using AtlasNode = ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode;

  using __c = ::UnityEngine::Rendering::__AtlasAllocator____c;

  /// @brief Field m_Height, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Height, put = __cordl_internal_set_m_Height)) int32_t m_Height;

  /// @brief Field m_NodePool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NodePool,
                      put = __cordl_internal_set_m_NodePool))::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>* m_NodePool;

  /// @brief Field m_Root, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Root, put = __cordl_internal_set_m_Root))::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* m_Root;

  /// @brief Field m_Width, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Width, put = __cordl_internal_set_m_Width)) int32_t m_Width;

  /// @brief Field powerOfTwoPadding, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_powerOfTwoPadding, put = __cordl_internal_set_powerOfTwoPadding)) bool powerOfTwoPadding;

  /// @brief Method Allocate, addr 0x1a0b740, size 0x80, virtual false, abstract: false, final false
  inline bool Allocate(ByRef<::UnityEngine::Vector4> result, int32_t width, int32_t height);

  static inline ::UnityEngine::Rendering::AtlasAllocator* New_ctor(int32_t width, int32_t height, bool potPadding);

  /// @brief Method Reset, addr 0x1a0b9a8, size 0x3c, virtual false, abstract: false, final false
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_m_Height() const;

  constexpr int32_t& __cordl_internal_get_m_Height();

  constexpr ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*& __cordl_internal_get_m_NodePool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*> const& __cordl_internal_get_m_NodePool() const;

  constexpr ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*& __cordl_internal_get_m_Root();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*> const& __cordl_internal_get_m_Root() const;

  constexpr int32_t const& __cordl_internal_get_m_Width() const;

  constexpr int32_t& __cordl_internal_get_m_Width();

  constexpr bool const& __cordl_internal_get_powerOfTwoPadding() const;

  constexpr bool& __cordl_internal_get_powerOfTwoPadding();

  constexpr void __cordl_internal_set_m_Height(int32_t value);

  constexpr void __cordl_internal_set_m_NodePool(::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>* value);

  constexpr void __cordl_internal_set_m_Root(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* value);

  constexpr void __cordl_internal_set_m_Width(int32_t value);

  constexpr void __cordl_internal_set_powerOfTwoPadding(bool value);

  /// @brief Method .ctor, addr 0x1a0b528, size 0x20c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, bool potPadding);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AtlasAllocator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AtlasAllocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AtlasAllocator(AtlasAllocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AtlasAllocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AtlasAllocator(AtlasAllocator const&) = delete;

  /// @brief Field m_Root, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* ___m_Root;

  /// @brief Field m_Width, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Width;

  /// @brief Field m_Height, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_Height;

  /// @brief Field powerOfTwoPadding, offset: 0x20, size: 0x1, def value: None
  bool ___powerOfTwoPadding;

  /// @brief Field m_NodePool, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>* ___m_NodePool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AtlasAllocator, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocator, ___m_Root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocator, ___m_Width) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocator, ___m_Height) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocator, ___powerOfTwoPadding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocator, ___m_NodePool) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::AtlasAllocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AtlasAllocator*, "UnityEngine.Rendering", "AtlasAllocator");
NEED_NO_BOX(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*, "UnityEngine.Rendering", "AtlasAllocator/AtlasNode");
NEED_NO_BOX(::UnityEngine::Rendering::__AtlasAllocator____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__AtlasAllocator____c*, "UnityEngine.Rendering", "AtlasAllocator/<>c");
