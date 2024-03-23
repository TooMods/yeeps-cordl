#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Runtime)
// Forward declare root types
namespace Amazon::Lambda {
class Runtime;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Runtime);
// Type: Amazon.Lambda::Runtime
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::Runtime*
class CORDL_TYPE Runtime : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field Dotnetcore10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Dotnetcore10, put = setStaticF_Dotnetcore10))::Amazon::Lambda::Runtime* Dotnetcore10;

  /// @brief Field Dotnetcore20, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Dotnetcore20, put = setStaticF_Dotnetcore20))::Amazon::Lambda::Runtime* Dotnetcore20;

  /// @brief Field Dotnetcore21, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Dotnetcore21, put = setStaticF_Dotnetcore21))::Amazon::Lambda::Runtime* Dotnetcore21;

  /// @brief Field Dotnetcore31, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Dotnetcore31, put = setStaticF_Dotnetcore31))::Amazon::Lambda::Runtime* Dotnetcore31;

  /// @brief Field Go1X, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Go1X, put = setStaticF_Go1X))::Amazon::Lambda::Runtime* Go1X;

  /// @brief Field Java11, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Java11, put = setStaticF_Java11))::Amazon::Lambda::Runtime* Java11;

  /// @brief Field Java8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Java8, put = setStaticF_Java8))::Amazon::Lambda::Runtime* Java8;

  /// @brief Field Java8Al2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Java8Al2, put = setStaticF_Java8Al2))::Amazon::Lambda::Runtime* Java8Al2;

  /// @brief Field Nodejs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Nodejs, put = setStaticF_Nodejs))::Amazon::Lambda::Runtime* Nodejs;

  /// @brief Field Nodejs10X, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Nodejs10X, put = setStaticF_Nodejs10X))::Amazon::Lambda::Runtime* Nodejs10X;

  /// @brief Field Nodejs12X, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Nodejs12X, put = setStaticF_Nodejs12X))::Amazon::Lambda::Runtime* Nodejs12X;

  /// @brief Field Nodejs14X, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Nodejs14X, put = setStaticF_Nodejs14X))::Amazon::Lambda::Runtime* Nodejs14X;

  /// @brief Field Nodejs43, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Nodejs43, put = setStaticF_Nodejs43))::Amazon::Lambda::Runtime* Nodejs43;

  /// @brief Field Nodejs43Edge, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Nodejs43Edge, put = setStaticF_Nodejs43Edge))::Amazon::Lambda::Runtime* Nodejs43Edge;

  /// @brief Field Nodejs610, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Nodejs610, put = setStaticF_Nodejs610))::Amazon::Lambda::Runtime* Nodejs610;

  /// @brief Field Nodejs810, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Nodejs810, put = setStaticF_Nodejs810))::Amazon::Lambda::Runtime* Nodejs810;

  /// @brief Field Provided, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Provided, put = setStaticF_Provided))::Amazon::Lambda::Runtime* Provided;

  /// @brief Field ProvidedAl2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ProvidedAl2, put = setStaticF_ProvidedAl2))::Amazon::Lambda::Runtime* ProvidedAl2;

  /// @brief Field Python27, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Python27, put = setStaticF_Python27))::Amazon::Lambda::Runtime* Python27;

  /// @brief Field Python36, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Python36, put = setStaticF_Python36))::Amazon::Lambda::Runtime* Python36;

  /// @brief Field Python37, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Python37, put = setStaticF_Python37))::Amazon::Lambda::Runtime* Python37;

  /// @brief Field Python38, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Python38, put = setStaticF_Python38))::Amazon::Lambda::Runtime* Python38;

  /// @brief Field Ruby25, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Ruby25, put = setStaticF_Ruby25))::Amazon::Lambda::Runtime* Ruby25;

  /// @brief Field Ruby27, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Ruby27, put = setStaticF_Ruby27))::Amazon::Lambda::Runtime* Ruby27;

  /// @brief Method FindValue, addr 0x2bb676c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::Runtime* FindValue(::StringW value);

  static inline ::Amazon::Lambda::Runtime* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb6704, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::Runtime* getStaticF_Dotnetcore10();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Dotnetcore20();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Dotnetcore21();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Dotnetcore31();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Go1X();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Java11();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Java8();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Java8Al2();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Nodejs();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Nodejs10X();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Nodejs12X();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Nodejs14X();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Nodejs43();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Nodejs43Edge();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Nodejs610();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Nodejs810();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Provided();

  static inline ::Amazon::Lambda::Runtime* getStaticF_ProvidedAl2();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Python27();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Python36();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Python37();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Python38();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Ruby25();

  static inline ::Amazon::Lambda::Runtime* getStaticF_Ruby27();

  /// @brief Method op_Implicit, addr 0x2bb67d8, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::Runtime* op_Implicit___Amazon__Lambda__Runtime_(::StringW value);

  static inline void setStaticF_Dotnetcore10(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Dotnetcore20(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Dotnetcore21(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Dotnetcore31(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Go1X(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Java11(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Java8(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Java8Al2(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Nodejs(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Nodejs10X(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Nodejs12X(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Nodejs14X(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Nodejs43(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Nodejs43Edge(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Nodejs610(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Nodejs810(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Provided(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_ProvidedAl2(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Python27(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Python36(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Python37(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Python38(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Ruby25(::Amazon::Lambda::Runtime* value);

  static inline void setStaticF_Ruby27(::Amazon::Lambda::Runtime* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Runtime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Runtime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Runtime(Runtime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Runtime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Runtime(Runtime const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Runtime, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::Runtime);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Runtime*, "Amazon.Lambda", "Runtime");
