#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Lock)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class Lock;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Lock);
// Type: System.Threading::Lock
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::Lock*
class CORDL_TYPE Lock : public ::System::Object {
public:
  // Declarations
  /// @brief Field _lock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__lock, put = __cordl_internal_set__lock))::System::Object* _lock;

  /// @brief Method Acquire, addr 0x10e8eec, size 0x8, virtual false, abstract: false, final false
  inline void Acquire();

  static inline ::System::Threading::Lock* New_ctor();

  /// @brief Method Release, addr 0x10e8f10, size 0x8, virtual false, abstract: false, final false
  inline void Release();

  constexpr ::System::Object*& __cordl_internal_get__lock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__lock() const;

  constexpr void __cordl_internal_set__lock(::System::Object* value);

  /// @brief Method .ctor, addr 0x10e8f20, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Lock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lock(Lock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lock(Lock const&) = delete;

  /// @brief Field _lock, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____lock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Lock, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Lock, ____lock) == 0x10, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::Lock);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Lock*, "System.Threading", "Lock");
