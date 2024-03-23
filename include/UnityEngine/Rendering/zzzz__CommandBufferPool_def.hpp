#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CommandBufferPool)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::Rendering {
class __CommandBufferPool____c;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CommandBufferPool;
}
namespace UnityEngine::Rendering {
class __CommandBufferPool____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CommandBufferPool);
MARK_REF_PTR_T(::UnityEngine::Rendering::__CommandBufferPool____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::CommandBufferPool::<>c*
class CORDL_TYPE __CommandBufferPool____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::__CommandBufferPool____c* __9;

  static inline ::UnityEngine::Rendering::__CommandBufferPool____c* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x1bcfc3c, size 0x18, virtual false, abstract: false, final false
  inline void __cctor_b__4_0(::UnityEngine::Rendering::CommandBuffer* x);

  /// @brief Method .ctor, addr 0x1bcfc34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::__CommandBufferPool____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Rendering::__CommandBufferPool____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CommandBufferPool____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CommandBufferPool____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CommandBufferPool____c(__CommandBufferPool____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CommandBufferPool____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CommandBufferPool____c(__CommandBufferPool____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__CommandBufferPool____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::CommandBufferPool
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::CommandBufferPool*
class CORDL_TYPE CommandBufferPool : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::__CommandBufferPool____c;

  /// @brief Field s_BufferPool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_BufferPool, put = setStaticF_s_BufferPool))::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>* s_BufferPool;

  /// @brief Method Get, addr 0x1bcf900, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::CommandBuffer* Get();

  /// @brief Method Get, addr 0x1bcf9a8, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::CommandBuffer* Get(::StringW name);

  /// @brief Method Release, addr 0x1bcfa40, size 0x80, virtual false, abstract: false, final false
  static inline void Release(::UnityEngine::Rendering::CommandBuffer* buffer);

  static inline ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>* getStaticF_s_BufferPool();

  static inline void setStaticF_s_BufferPool(::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBufferPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBufferPool(CommandBufferPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBufferPool(CommandBufferPool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CommandBufferPool, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CommandBufferPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CommandBufferPool*, "UnityEngine.Rendering", "CommandBufferPool");
NEED_NO_BOX(::UnityEngine::Rendering::__CommandBufferPool____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__CommandBufferPool____c*, "UnityEngine.Rendering", "CommandBufferPool/<>c");
