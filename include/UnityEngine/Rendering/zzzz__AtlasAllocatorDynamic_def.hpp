#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AtlasAllocatorDynamic)
namespace GlobalNamespace {
struct __AtlasAllocatorDynamic__AtlasNode__AtlasNodeFlags;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::Rendering {
class __AtlasAllocatorDynamic__AtlasNodePool;
}
namespace UnityEngine::Rendering {
struct __AtlasAllocatorDynamic__AtlasNode;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AtlasAllocatorDynamic__AtlasNode__AtlasNodeFlags;
}
namespace UnityEngine::Rendering {
class AtlasAllocatorDynamic;
}
namespace UnityEngine::Rendering {
class __AtlasAllocatorDynamic__AtlasNodePool;
}
namespace UnityEngine::Rendering {
struct __AtlasAllocatorDynamic__AtlasNode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AtlasAllocatorDynamic__AtlasNode__AtlasNodeFlags);
MARK_REF_PTR_T(::UnityEngine::Rendering::AtlasAllocatorDynamic);
MARK_REF_PTR_T(::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool);
MARK_VAL_T(::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNode);
// Type: ::AtlasNodePool
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::AtlasAllocatorDynamic::AtlasNodePool*
class CORDL_TYPE __AtlasAllocatorDynamic__AtlasNodePool : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_FreelistHead, offset 0x1a, size 0x2
  __declspec(property(get = __cordl_internal_get_m_FreelistHead, put = __cordl_internal_set_m_FreelistHead)) int16_t m_FreelistHead;

  /// @brief Field m_Next, offset 0x18, size 0x2
  __declspec(property(get = __cordl_internal_get_m_Next, put = __cordl_internal_set_m_Next)) int16_t m_Next;

  /// @brief Field m_Nodes, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_Nodes,
      put = __cordl_internal_set_m_Nodes))::ArrayW<::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNode, ::Array<::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNode>*> m_Nodes;

  /// @brief Method AtlasNodeCreate, addr 0x1a0d598, size 0x140, virtual false, abstract: false, final false
  inline int16_t AtlasNodeCreate(int16_t parent);

  /// @brief Method AtlasNodeFree, addr 0x1a0e460, size 0x3c, virtual false, abstract: false, final false
  inline void AtlasNodeFree(int16_t index);

  /// @brief Method Clear, addr 0x1a0dda4, size 0xc, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x1a0e3f0, size 0x10, virtual false, abstract: false, final false
  inline void Dispose();

  static inline ::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool* New_ctor(int16_t capacity);

  constexpr int16_t const& __cordl_internal_get_m_FreelistHead() const;

  constexpr int16_t& __cordl_internal_get_m_FreelistHead();

  constexpr int16_t const& __cordl_internal_get_m_Next() const;

  constexpr int16_t& __cordl_internal_get_m_Next();

  constexpr ::ArrayW<::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNode, ::Array<::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNode>*> const& __cordl_internal_get_m_Nodes() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNode, ::Array<::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNode>*>& __cordl_internal_get_m_Nodes();

  constexpr void __cordl_internal_set_m_FreelistHead(int16_t value);

  constexpr void __cordl_internal_set_m_Next(int16_t value);

  constexpr void __cordl_internal_set_m_Nodes(::ArrayW<::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNode, ::Array<::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNode>*> value);

  /// @brief Method .ctor, addr 0x1a0d528, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(int16_t capacity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AtlasAllocatorDynamic__AtlasNodePool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AtlasAllocatorDynamic__AtlasNodePool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AtlasAllocatorDynamic__AtlasNodePool(__AtlasAllocatorDynamic__AtlasNodePool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AtlasAllocatorDynamic__AtlasNodePool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AtlasAllocatorDynamic__AtlasNodePool(__AtlasAllocatorDynamic__AtlasNodePool const&) = delete;

  /// @brief Field m_Nodes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNode, ::Array<::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNode>*> ___m_Nodes;

  /// @brief Field m_Next, offset: 0x18, size: 0x2, def value: None
  int16_t ___m_Next;

  /// @brief Field m_FreelistHead, offset: 0x1a, size: 0x2, def value: None
  int16_t ___m_FreelistHead;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool, ___m_Nodes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool, ___m_Next) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool, ___m_FreelistHead) == 0x1a, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::AtlasNodeFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AtlasAllocatorDynamic::AtlasNode::AtlasNodeFlags
struct CORDL_TYPE __AtlasAllocatorDynamic__AtlasNode__AtlasNodeFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct ____AtlasAllocatorDynamic__AtlasNode__AtlasNodeFlags_Unwrapped
  enum struct ____AtlasAllocatorDynamic__AtlasNode__AtlasNodeFlags_Unwrapped : uint32_t {
    __E_IsOccupied = static_cast<uint32_t>(0x1u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AtlasAllocatorDynamic__AtlasNode__AtlasNodeFlags_Unwrapped() const noexcept {
    return static_cast<____AtlasAllocatorDynamic__AtlasNode__AtlasNodeFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AtlasAllocatorDynamic__AtlasNode__AtlasNodeFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __AtlasAllocatorDynamic__AtlasNode__AtlasNodeFlags(uint32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief Field IsOccupied value: static_cast<uint32_t>(0x1u)
  static ::GlobalNamespace::__AtlasAllocatorDynamic__AtlasNode__AtlasNodeFlags const IsOccupied;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AtlasAllocatorDynamic__AtlasNode__AtlasNodeFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AtlasAllocatorDynamic__AtlasNode__AtlasNodeFlags, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AtlasNode
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::AtlasAllocatorDynamic::AtlasNode
#pragma pack(push, 0)
struct CORDL_TYPE __AtlasAllocatorDynamic__AtlasNode {
public:
  // Declarations
  using AtlasNodeFlags = ::GlobalNamespace::__AtlasAllocatorDynamic__AtlasNode__AtlasNodeFlags;

  /// @brief Field m_Flags, offset 0xa, size 0x2
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) uint16_t m_Flags;

  /// @brief Field m_FreelistNext, offset 0x8, size 0x2
  __declspec(property(get = __cordl_internal_get_m_FreelistNext, put = __cordl_internal_set_m_FreelistNext)) int16_t m_FreelistNext;

  /// @brief Field m_LeftChild, offset 0x4, size 0x2
  __declspec(property(get = __cordl_internal_get_m_LeftChild, put = __cordl_internal_set_m_LeftChild)) int16_t m_LeftChild;

  /// @brief Field m_Parent, offset 0x2, size 0x2
  __declspec(property(get = __cordl_internal_get_m_Parent, put = __cordl_internal_set_m_Parent)) int16_t m_Parent;

  /// @brief Field m_Rect, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Rect, put = __cordl_internal_set_m_Rect))::UnityEngine::Vector4 m_Rect;

  /// @brief Field m_RightChild, offset 0x6, size 0x2
  __declspec(property(get = __cordl_internal_get_m_RightChild, put = __cordl_internal_set_m_RightChild)) int16_t m_RightChild;

  /// @brief Field m_Self, offset 0x0, size 0x2
  __declspec(property(get = __cordl_internal_get_m_Self, put = __cordl_internal_set_m_Self)) int16_t m_Self;

  /// @brief Method Allocate, addr 0x1a0d804, size 0x37c, virtual false, abstract: false, final false
  inline int16_t Allocate(::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool* pool, int32_t width, int32_t height);

  /// @brief Method ClearIsOccupied, addr 0x1a0e4ac, size 0x10, virtual false, abstract: false, final false
  inline void ClearIsOccupied();

  /// @brief Method IsLeafNode, addr 0x1a0e4bc, size 0x10, virtual false, abstract: false, final false
  inline bool IsLeafNode();

  /// @brief Method IsMergeNeeded, addr 0x1a0e574, size 0x1f308, virtual false, abstract: false, final false
  inline bool IsMergeNeeded(::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool* pool);

  /// @brief Method IsOccupied, addr 0x1a0e3e4, size 0xc, virtual false, abstract: false, final false
  inline bool IsOccupied();

  /// @brief Method ReleaseAndMerge, addr 0x1a0dc4c, size 0xb4, virtual false, abstract: false, final false
  inline void ReleaseAndMerge(::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool* pool);

  /// @brief Method ReleaseChildren, addr 0x1a0e4cc, size 0xa8, virtual false, abstract: false, final false
  inline void ReleaseChildren(::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool* pool);

  /// @brief Method SetIsOccupied, addr 0x1a0e49c, size 0x10, virtual false, abstract: false, final false
  inline void SetIsOccupied();

  constexpr uint16_t const& __cordl_internal_get_m_Flags() const;

  constexpr uint16_t& __cordl_internal_get_m_Flags();

  constexpr int16_t const& __cordl_internal_get_m_FreelistNext() const;

  constexpr int16_t& __cordl_internal_get_m_FreelistNext();

  constexpr int16_t const& __cordl_internal_get_m_LeftChild() const;

  constexpr int16_t& __cordl_internal_get_m_LeftChild();

  constexpr int16_t const& __cordl_internal_get_m_Parent() const;

  constexpr int16_t& __cordl_internal_get_m_Parent();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_m_Rect() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_m_Rect();

  constexpr int16_t const& __cordl_internal_get_m_RightChild() const;

  constexpr int16_t& __cordl_internal_get_m_RightChild();

  constexpr int16_t const& __cordl_internal_get_m_Self() const;

  constexpr int16_t& __cordl_internal_get_m_Self();

  constexpr void __cordl_internal_set_m_Flags(uint16_t value);

  constexpr void __cordl_internal_set_m_FreelistNext(int16_t value);

  constexpr void __cordl_internal_set_m_LeftChild(int16_t value);

  constexpr void __cordl_internal_set_m_Parent(int16_t value);

  constexpr void __cordl_internal_set_m_Rect(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_m_RightChild(int16_t value);

  constexpr void __cordl_internal_set_m_Self(int16_t value);

  /// @brief Method .ctor, addr 0x1a0e400, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(int16_t self, int16_t parent);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AtlasAllocatorDynamic__AtlasNode();

  // Ctor Parameters [CppParam { name: "m_Self", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "m_Parent", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_LeftChild", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "m_RightChild", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "m_FreelistNext", ty: "int16_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_Rect", ty: "::UnityEngine::Vector4", modifiers: "", def_value:
  // None }]
  constexpr __AtlasAllocatorDynamic__AtlasNode(int16_t m_Self, int16_t m_Parent, int16_t m_LeftChild, int16_t m_RightChild, int16_t m_FreelistNext, uint16_t m_Flags,
                                               ::UnityEngine::Vector4 m_Rect) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_Self_padding[0x0];
      /// @brief Field m_Self, offset: 0x0, size: 0x2, def value: None
      int16_t ___m_Self;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_Self_padding_forAlignment[0x0];
      /// @brief Field m_Self, offset: 0x0, size: 0x2, def value: None
      int16_t ___m_Self_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___m_Parent_padding[0x2];
      /// @brief Field m_Parent, offset: 0x2, size: 0x2, def value: None
      int16_t ___m_Parent;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___m_Parent_padding_forAlignment[0x2];
      /// @brief Field m_Parent, offset: 0x2, size: 0x2, def value: None
      int16_t ___m_Parent_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_LeftChild_padding[0x4];
      /// @brief Field m_LeftChild, offset: 0x4, size: 0x2, def value: None
      int16_t ___m_LeftChild;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_LeftChild_padding_forAlignment[0x4];
      /// @brief Field m_LeftChild, offset: 0x4, size: 0x2, def value: None
      int16_t ___m_LeftChild_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___m_RightChild_padding[0x6];
      /// @brief Field m_RightChild, offset: 0x6, size: 0x2, def value: None
      int16_t ___m_RightChild;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___m_RightChild_padding_forAlignment[0x6];
      /// @brief Field m_RightChild, offset: 0x6, size: 0x2, def value: None
      int16_t ___m_RightChild_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___m_FreelistNext_padding[0x8];
      /// @brief Field m_FreelistNext, offset: 0x8, size: 0x2, def value: None
      int16_t ___m_FreelistNext;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___m_FreelistNext_padding_forAlignment[0x8];
      /// @brief Field m_FreelistNext, offset: 0x8, size: 0x2, def value: None
      int16_t ___m_FreelistNext_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xa
      uint8_t ___m_Flags_padding[0xa];
      /// @brief Field m_Flags, offset: 0xa, size: 0x2, def value: None
      uint16_t ___m_Flags;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xa for alignment
      uint8_t ___m_Flags_padding_forAlignment[0xa];
      /// @brief Field m_Flags, offset: 0xa, size: 0x2, def value: None
      uint16_t ___m_Flags_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___m_Rect_padding[0x10];
      /// @brief Field m_Rect, offset: 0x10, size: 0x10, def value: None
      ::UnityEngine::Vector4 ___m_Rect;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___m_Rect_padding_forAlignment[0x10];
      /// @brief Field m_Rect, offset: 0x10, size: 0x10, def value: None
      ::UnityEngine::Vector4 ___m_Rect_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNode, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::AtlasAllocatorDynamic
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::AtlasAllocatorDynamic*
class CORDL_TYPE AtlasAllocatorDynamic : public ::System::Object {
public:
  // Declarations
  using AtlasNode = ::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNode;

  using AtlasNodePool = ::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool;

  /// @brief Field m_Height, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Height, put = __cordl_internal_set_m_Height)) int32_t m_Height;

  /// @brief Field m_NodeFromID, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NodeFromID, put = __cordl_internal_set_m_NodeFromID))::System::Collections::Generic::Dictionary_2<int32_t, int16_t>* m_NodeFromID;

  /// @brief Field m_Pool, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Pool, put = __cordl_internal_set_m_Pool))::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool* m_Pool;

  /// @brief Field m_Root, offset 0x20, size 0x2
  __declspec(property(get = __cordl_internal_get_m_Root, put = __cordl_internal_set_m_Root)) int16_t m_Root;

  /// @brief Field m_Width, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Width, put = __cordl_internal_set_m_Width)) int32_t m_Width;

  /// @brief Method Allocate, addr 0x1a0d6d8, size 0x12c, virtual false, abstract: false, final false
  inline bool Allocate(ByRef<::UnityEngine::Vector4> result, int32_t key, int32_t width, int32_t height);

  /// @brief Method DebugStringFromNode, addr 0x1a0de20, size 0x5c4, virtual false, abstract: false, final false
  inline void DebugStringFromNode(ByRef<::StringW> res, int16_t n, int32_t depthCurrent, int32_t depthMax);

  /// @brief Method DebugStringFromRoot, addr 0x1a0ddb0, size 0x70, virtual false, abstract: false, final false
  inline ::StringW DebugStringFromRoot(int32_t depthMax);

  static inline ::UnityEngine::Rendering::AtlasAllocatorDynamic* New_ctor(int32_t width, int32_t height, int32_t capacityAllocations);

  /// @brief Method Release, addr 0x1a0dd00, size 0xa4, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method Release, addr 0x1a0db80, size 0xcc, virtual false, abstract: false, final false
  inline void Release(int32_t key);

  constexpr int32_t const& __cordl_internal_get_m_Height() const;

  constexpr int32_t& __cordl_internal_get_m_Height();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int16_t>*& __cordl_internal_get_m_NodeFromID();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int16_t>*> const& __cordl_internal_get_m_NodeFromID() const;

  constexpr ::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool*& __cordl_internal_get_m_Pool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool*> const& __cordl_internal_get_m_Pool() const;

  constexpr int16_t const& __cordl_internal_get_m_Root() const;

  constexpr int16_t& __cordl_internal_get_m_Root();

  constexpr int32_t const& __cordl_internal_get_m_Width() const;

  constexpr int32_t& __cordl_internal_get_m_Width();

  constexpr void __cordl_internal_set_m_Height(int32_t value);

  constexpr void __cordl_internal_set_m_NodeFromID(::System::Collections::Generic::Dictionary_2<int32_t, int16_t>* value);

  constexpr void __cordl_internal_set_m_Pool(::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool* value);

  constexpr void __cordl_internal_set_m_Root(int16_t value);

  constexpr void __cordl_internal_set_m_Width(int32_t value);

  /// @brief Method .ctor, addr 0x1a0d408, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t capacityAllocations);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AtlasAllocatorDynamic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AtlasAllocatorDynamic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AtlasAllocatorDynamic(AtlasAllocatorDynamic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AtlasAllocatorDynamic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AtlasAllocatorDynamic(AtlasAllocatorDynamic const&) = delete;

  /// @brief Field m_Width, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Width;

  /// @brief Field m_Height, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_Height;

  /// @brief Field m_Pool, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool* ___m_Pool;

  /// @brief Field m_Root, offset: 0x20, size: 0x2, def value: None
  int16_t ___m_Root;

  /// @brief Field m_NodeFromID, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int16_t>* ___m_NodeFromID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AtlasAllocatorDynamic, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocatorDynamic, ___m_Width) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocatorDynamic, ___m_Height) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocatorDynamic, ___m_Pool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocatorDynamic, ___m_Root) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AtlasAllocatorDynamic, ___m_NodeFromID) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AtlasAllocatorDynamic__AtlasNode__AtlasNodeFlags, "UnityEngine.Rendering", "AtlasAllocatorDynamic/AtlasNode/AtlasNodeFlags");
NEED_NO_BOX(::UnityEngine::Rendering::AtlasAllocatorDynamic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AtlasAllocatorDynamic*, "UnityEngine.Rendering", "AtlasAllocatorDynamic");
NEED_NO_BOX(::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNodePool*, "UnityEngine.Rendering", "AtlasAllocatorDynamic/AtlasNodePool");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__AtlasAllocatorDynamic__AtlasNode, "UnityEngine.Rendering", "AtlasAllocatorDynamic/AtlasNode");
