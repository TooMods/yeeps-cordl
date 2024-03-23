#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Hashing)
namespace Amazon::Runtime::Internal::Util {
class __Hashing____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class Hashing;
}
namespace Amazon::Runtime::Internal::Util {
class __Hashing____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::Hashing);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::__Hashing____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Hashing::<>c*
class CORDL_TYPE __Hashing____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::Internal::Util::__Hashing____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0))::System::Func_2<::System::Object*, int32_t>* __9__0_0;

  static inline ::Amazon::Runtime::Internal::Util::__Hashing____c* New_ctor();

  /// @brief Method <Hash>b__0_0, addr 0x2438b68, size 0x20, virtual false, abstract: false, final false
  inline int32_t _Hash_b__0_0(::System::Object* v);

  /// @brief Method .ctor, addr 0x2438b60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::Internal::Util::__Hashing____c* getStaticF___9();

  static inline ::System::Func_2<::System::Object*, int32_t>* getStaticF___9__0_0();

  static inline void setStaticF___9(::Amazon::Runtime::Internal::Util::__Hashing____c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::System::Object*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hashing____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Hashing____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Hashing____c(__Hashing____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Hashing____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Hashing____c(__Hashing____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__Hashing____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::Hashing
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::Hashing*
class CORDL_TYPE Hashing : public ::System::Object {
public:
  // Declarations
  using __c = ::Amazon::Runtime::Internal::Util::__Hashing____c;

  /// @brief Method CombineHashes, addr 0x2438a8c, size 0x64, virtual false, abstract: false, final false
  static inline int32_t CombineHashes(::ArrayW<int32_t, ::Array<int32_t>*> hashes);

  /// @brief Method CombineHashesInternal, addr 0x2438af0, size 0xc, virtual false, abstract: false, final false
  static inline int32_t CombineHashesInternal(int32_t a, int32_t b);

  /// @brief Method Hash, addr 0x2438974, size 0x118, virtual false, abstract: false, final false
  static inline int32_t Hash(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hashing();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hashing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hashing(Hashing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hashing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hashing(Hashing const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::Hashing, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::Hashing);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::Hashing*, "Amazon.Runtime.Internal.Util", "Hashing");
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::__Hashing____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__Hashing____c*, "Amazon.Runtime.Internal.Util", "Hashing/<>c");
